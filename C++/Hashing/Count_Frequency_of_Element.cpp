#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n;
	cin>>n;

	vector<int> a(n);
    for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	map<int, int> frquency;
	for(int i=0;i<n;i++)
	{
		frquency[a[i]]++;
	}

	map<int, int> :: iterator it;
	for(it=frquency.begin();it!=frquency.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
}