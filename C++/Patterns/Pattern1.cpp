#include<iostream>
using namespace std;
int main()
{
 /*The following pattern will be printed if you enter 5
* 
* * 
* * * 
* * * * 
* * * * * */ 
    int n;
    cout<<"Enter the number of lines"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++) {
 
      
        for (int j = 0; j <= i; j++) {
 
          
            cout << "* ";
        }
 
        
        cout << endl;
    }

}