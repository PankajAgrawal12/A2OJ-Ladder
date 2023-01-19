#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	int n;
	cin>>n;
	map<char,int> m;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			char x;
			cin>>x;
			if(x!='.')
				m[x]++;
		}
	}
	string ans="YES";
	n+=n;
	for(auto it:m)
	{
		if(it.second>n)
		{
			ans="NO";
			break;
		}
	}
	cout<<ans<<endl;

	return 0;
}
