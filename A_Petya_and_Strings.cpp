#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007

#define B2(n) n, n + 1, n + 1, n + 2
#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)
#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)
ll lookuptable[256] = { B6(0), B6(1), B6(1), B6(2) };
ll countSetBits(ll N)
{
    ll count = lookuptable[N & 0xff] + lookuptable[(N >> 8) & 0xff] +lookuptable[(N >> 16) & 0xff] +lookuptable[(N >> 24) & 0xff];
    return count;
}

using namespace std;

int main()
{
	fast_io
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		a[i]=tolower(a[i]);
	}
	for(int i=0;i<b.size();i++)
	{
		b[i]=tolower(b[i]);
	}
	int flag=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]<b[i])
		{
			flag=-1;
			break;
		}
		else if(a[i]>b[i])
		{
			flag=1;
			break;
		}
	}
	cout<<flag<<endl;
	
	return 0;
}
