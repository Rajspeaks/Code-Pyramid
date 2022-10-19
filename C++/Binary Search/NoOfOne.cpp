
#include <bits/stdc++.h>

using namespace std;

#define int long long



signed main(){
   	int n;cin>>n;
   	int arr[n];
   	for(auto&x:arr)cin>>x;
   	
   	int lo=0,hi=n;
   	int mid=0;
   	while(hi-lo>1){
   		mid=(lo+hi)/2;
   		if(arr[mid]==1){
   			hi=mid;
   		}
   		else lo=mid+1;
   	}
   	if(arr[lo]==1)cout<<n-lo;
   	else cout<<n-hi;
}

input:
5
0 0 0 1 1

output:
2
