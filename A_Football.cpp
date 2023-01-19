#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	int n;
	cin>>n;
	map<string,int> m;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		m[s]++;
	}
	int ans=INT_MIN;
	string team="";
	for(auto it:m)
	{
		if(it.second>ans)
		{
			ans=it.second;
			team=it.first;
		}
	}
	cout<<team<<endl;

	return 0;
}
