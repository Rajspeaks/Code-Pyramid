
// smallest missing element in sorted array of distinct non negative integers

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(auto&x:arr)cin>>x;
    
    int low=0,high=n-1;
    int mid;
    while(high-low>1){
    	mid=(low+high)/2;
    	if(arr[mid]==mid){
    		low=mid+1;
    	}
    	else{
    		high=mid;
    	}
    }
   	if(arr[low]!=low)cout<<low;
   	else if(arr[high]!=high)cout<<high;
   	else cout<<n;

}


// intput:
// 5
// 0 1 2 3 4 
// output:
// 5

// intput:
// 5
// 0 1 6 3 4 
// output:
// 2
