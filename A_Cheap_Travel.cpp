#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000000000000007

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
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int ans1=n*a;
	int days=n/m;
	int ans2;
	if(n%m==0)
	{
		ans2=days*b;
	}
	else
	{
		ans2=(days+1)*b;
		int x=n-m*days;
		int ans3=(days)*b+x*a;
		ans2=min(ans2,ans3);
	}
	cout<<min(ans1,ans2);
	return 0;
}

