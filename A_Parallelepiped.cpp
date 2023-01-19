#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	int x,y,z;
	cin>>x>>y>>z;
	int c=z*y/x;
	c=sqrt(c);
	int b=y/c;
	int a=x/b;
	// cout<<a<<b<<c<<endl;
	cout<<4*(a+b+c)<<endl;
	return 0;
}
