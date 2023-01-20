
#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;

int main()
{
	fast_io
	string s;
	cin>>s;
	ll mid=0;
	for(ll i=0;i<s.size();i++)
	{
		if(s[i]=='^')
		{
			mid=i;
			break;
		}
	}
	ll sum=0;
	for(ll i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))
		{
			ll x=s[i]-48;
			sum+=x*(i-mid);
		}
	}
	if(sum==0)
		cout<<"balance\n";
	else if(sum>0)
		cout<<"right\n";
	else	
		cout<<"left\n";
	return 0;
}
