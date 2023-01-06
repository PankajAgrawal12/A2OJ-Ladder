#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;

int main()
{
	fast_io
	int ans=0,n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		
		if(s[0]=='X')
		{
			if(s[1]=='+'&&s[2]=='+')
				ans++;
			else if(s[1]=='-'&&s[2]=='-')
				ans--;
		}
		else
		{
			if(s[1]=='+'&&s[0]=='+')
				ans++;
			else if(s[1]=='-'&&s[0]=='-')
				ans--;
		}
	}
	cout<<ans<<endl;

	return 0;
}
