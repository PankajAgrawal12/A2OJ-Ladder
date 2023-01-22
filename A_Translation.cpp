#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	string s,r;
	cin>>s>>r;
	reverse(s.begin(),s.end());
	if(r==s)
		cout<<"YES\n";
	else
		cout<<"NO\n";

	return 0;
}
