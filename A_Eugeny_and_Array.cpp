
#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;

int main()
{
	fast_io
	ll n,m;
	cin>>n>>m;
	ll arr[n];
	ll neg=0,pos=0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==-1)
			neg++;
		else 
			pos++;
	}
	ll x,y;
	for(ll i=0;i<m;i++)
	{
		cin>>x>>y;
		ll diff=y-x+1;
		if(diff%2==0&&pos>=diff/2&&neg>=diff/2)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
	return 0;
}
