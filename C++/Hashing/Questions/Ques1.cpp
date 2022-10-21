#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

#define loadfactor 20
#define prime 1000000009
#define a 3
#define b 4

struct listnode
{
    int key;
    int data;
    listnode *next;
};

struct hashtablenode
{
    int bcount;
    listnode *next;
};

struct hashtable
{
    int tsize;
    int count;
    hashtablenode *table;
};

int hash_number(int data, int size)
{

    return ((((a * data) + b) % prime) % size);
}

hashtable *createhashtable(int size)
{

    hashtable *h = new hashtable;

    if (!h)
    {
        return NULL;
    }

    h->tsize = size / loadfactor;
    h->count = 0;
    h->table = new hashtablenode[h->tsize];

    if (!h->table)
    {
        cout << "Memory Error\n";
        return NULL;
    }

    for (int i = 0; i < h->tsize; i++)
    {
        h->table[i].next = NULL;
        h->table[i].bcount = 0;
    }

    return h;
}

void printhashtable(hashtable **table)
{


    std::cout << "------------------------------------------------------------------------------------\n";
    for (int i = 0; i < (*table)->tsize; i++)
    {
        cout << "[node " << i << "] -> ";

        listnode *ptr = (*table)->table[i].next;

        while (ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }

        cout << " NUll\n\n";
    }
    std::cout << "------------------------------------------------------------------------------------\n";
}

void rehash(hashtable *& h)
{

    int oldsize, i, index;

    listnode *p, *temp, *temp2;

    hashtablenode *oldtable;

    oldsize = (*h).tsize;
    oldtable = (*h).table;
    
    (*h).tsize = (*h).tsize * 2;

    (*h).table = new hashtablenode[(*h).tsize];


    if (!(*h).table)
    {
        cout << "Allocated failed\n";
        return;
    }

    for (int i = 0; i < (*h).tsize; i++)
    {
        (*h).table[i].next = NULL;
        (*h).table[i].bcount = 0;
    }

    for (int i = 0; i < oldsize; i++)
    {
        for (temp = oldtable[i].next ; temp != NULL; )
        {
            index = hash_number(temp->data, (*h).tsize);
            temp2 = temp;
            temp = temp->next;
            temp2->next = (*h).table[index].next;
            (*h).table[index].next = temp2;
            (*h).table[index].bcount++;

        }
        
    }
}
int hashsearch(hashtable *h, int data)
{

    listnode *temp;

    int n = hash_number(data, h->tsize);

    temp = h->table[n].next;

    while (temp)
    {
        if (temp->data == data)
        {

            return 1;
        }

        temp = temp->next;
    }

    return 0;
}

int hashinsert(hashtable *h, int data)
{

    int index;
    //  cout<<"Inside Insert\n";

    listnode *temp, *newnode;

    if (hashsearch(h, data))
    {
        // cout<<"Already exist\n";
        return 0;
    }

    index = hash_number(data, h->tsize);
    // cout<<"Found index\n";
    newnode = new listnode;

    if (!newnode)
    {
        cout << "Out of space\n";
        return -1;
    }

    // cout<<"Created\n";
    newnode->key = index;
    newnode->data = data;
    newnode->next = h->table[index].next;
    h->table[index].next = newnode;
    h->table[index].bcount++;
    h->count++;

    if ((h->count / h->tsize) > loadfactor)
    {
        cout << "called rehash\n";
        printhashtable(&h);
        rehash(h);
        printhashtable(&h);
    }

    // printhashtable(&h);

    return 1;
}

int hashdelete(hashtable *h, int data)
{

    int index;

    listnode *temp, *prev;

    index = hash_number(data, h->tsize);

    for (temp = h->table[index].next, prev = NULL; temp; prev = temp, temp = temp->next)
    {
        if (temp->data == data)
        {
            if (prev != NULL)
            {
                prev->next = temp->next;
            }

            delete temp;

            h->table[index].bcount--;
            h->count--;
            return 1;
        }
    }

    return 0;
}

int main()
{

    hashtable *table = createhashtable(40);

    cout << "a = " << a << " , b = " << b << endl;

    printhashtable(&table);

    hashinsert(table, 1);
    printhashtable(&table);

    hashinsert(table, 2);
    printhashtable(&table);

    hashinsert(table, 2344);
    printhashtable(&table);

    hashinsert(table, 3434);
    printhashtable(&table);

    hashinsert(table, 2312);
    printhashtable(&table);

    hashinsert(table, 6);
    printhashtable(&table);

    hashinsert(table, 6);
    printhashtable(&table);

    cout << hashsearch(table, 3434);

    printhashtable(&table);

    srand(time(0));

    for (int i = 0; i < 200; i++)
    {
        int n = rand()%10000;
        hashinsert(table, n);
    }

    printhashtable(&table);

    cout<<table->count<<endl;


    return 0;
}