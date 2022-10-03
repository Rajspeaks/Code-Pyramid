#include<iostream>
using namespace std;
int main()
{
  //Number Pattern Printing
  /*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
 

*/
int n;
cout<<"Enter the no. of lines to be printed"<<endl;
cin>>n;
int num=1;
for (int i = 0; i < n; i++) {
 
      
        for (int j = 0; j <= i; j++)
            cout << num << " ";
 
        num = num + 1;
 
       
        cout << endl;
    }

}