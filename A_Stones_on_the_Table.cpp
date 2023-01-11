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
	string s;
	cin>>s;
	int count=0;
	for(int i=1;i<s.size();i++)
	{
		if(s[i-1]==s[i])
			count++;
	}
	cout<<count<<endl;
	return 0;
}
