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
	string s,ans="";
	cin>>s;
	int i=0;
	for(int i=0;i<s.size();i++)
	{
		
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
		{
//			s.replace(i,3," ");
			ans+=" ";
			i+=2;
		}
		else
			ans+=s[i];
	}
	for(int i=0;i<ans.size();i++)
	{
		if(ans[i]==' '&&ans[i+1]==' ')
			ans.erase(i,1);
	}
	if(ans[0]==' ')
		ans.erase(0,1);
	if(ans[ans.size()-1]==' ')
		ans.erase(ans.size()-1,1);	
	cout<<ans<<endl;
	return 0;
}
