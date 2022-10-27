// 24. Swap Nodes in Pairs
// Problem link:
// https://leetcode.com/problems/swap-nodes-in-pairs/

// Pairwise swap elements of a linked list
// You need to swap the nodes, not only the data.


#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

// // ################################### MAIN LOGIC ########################################################

class Solution
{
    public:
    // TC-> O(n) | SC->O(1)
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
       if(head == NULL || head->next == NULL) return head;
       Node *curr = head->next->next;
       Node * prev = head;
       head = head->next;
       head->next = prev;
       
       while(curr != NULL && curr->next != NULL)
       {
           prev->next = curr->next;
           prev = curr;
           Node *nxt = curr->next->next;
           curr->next->next = curr;
           curr = nxt;
       }
       
       prev->next = curr;
       return head;
    }
};

// // #############################################################################################

void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

int main() 
{ 
	
    int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		map<Node*, int> mp;
		mp[head] = head->data;
		for (int i = 0; i<n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
			mp[tail] = tail->data;
		}
		struct Node *failure = new Node(-1);
		Solution ob;
		head = ob.pairWiseSwap(head);
		int flag = 0;
		struct Node *temp = head;
		while(temp){
		    if(mp[temp] != temp->data){
		        flag = 1;
		        break;
		    }
		    temp = temp->next;
		}
		if(flag)
		    printList(failure);
		else
		    printList(head);
	return 0; 
}
