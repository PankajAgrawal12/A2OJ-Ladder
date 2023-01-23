#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	ll n;
	cin>>n;
	if(n%2==0)
		cout<<n/2<<endl;
	else
	{
		cout<<-(n+1)/2<<endl;
	}
	return 0;
}
