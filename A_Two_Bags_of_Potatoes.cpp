#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	ll y, k, n ;
	cin>>y>>k>>n;
	vector<int> v;
	for(ll i=k;i<=n;i+=k)
	{
		ll temp=i-y;
		if(temp>=1)
			v.push_back(temp);
	}
	if(v.empty())
		cout<<"-1\n";
	else{
		for(auto it:v)
			cout<<it<<" ";
		cout<<endl;
	}
	
	
	return 0;
}
