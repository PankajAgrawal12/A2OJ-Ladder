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
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		m[x]++;
	}
	 int maxx=INT_MIN;
	 for(auto it:m)
	 {
		if(it.second>maxx)
		{
			maxx=it.second;
		}
	 }
	 if(n-maxx>=maxx-1)
	 	cout<<"YES\n";
	 else	
	 	cout<<"NO\n";

	return 0;
}
