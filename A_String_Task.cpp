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
	string s;
	cin>>s;
	string ans="";
	for(int i=0;i<s.size();i++)
	{
		if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y'))
		{
			ans=ans+".";
			char ch=tolower(s[i]);
			ans=ans+ch;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
