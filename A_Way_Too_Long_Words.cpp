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
	w(t)
	{
		string s;
		cin>>s;
		if(s.size()<=10)
			cout<<s<<endl;
		else
		{
			string ans="";
			char ch=s[0];
			ans=ans+ch;
			int length=s.size()-2;
			ans=ans + to_string(length);
			ans=ans+s[s.size()-1];
			cout<<ans<<endl;
			
		}
	}
	
	return 0;
}
