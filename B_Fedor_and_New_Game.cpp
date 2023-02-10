#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	
		
		ll n,m,k;
		cin>>n>>m>>k;
		ll arr[m];
		for(ll i=0;i<m;i++)
			cin>>arr[i];
		ll fedor,count=0;
		cin>>fedor;
		for(ll i=0;i<m;i++)
		{
			if(__builtin_popcount(fedor^arr[i])<=k)
				count++;
		}
		cout<<count<<endl;
	return 0;
}
