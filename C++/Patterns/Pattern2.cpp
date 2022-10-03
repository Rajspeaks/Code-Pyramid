#include<iostream>
using namespace std;
int main()

{
    /*Program to print 180 degree rotated pattern.
    
             *
            **
           ***
          ****
         *****
    
    
    
    
    
    */
    int n;
    cout<<"Enter the no. of lines to be printed"<<endl;
    cin>>n;
     for(int i=n; i>0; i--)
    {
      for(int j=0; j<=n; j++) 
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }
}