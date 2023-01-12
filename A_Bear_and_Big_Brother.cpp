#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;


int main()
{
	fast_io
	
		int a,b;
		cin>>a>>b;
		int i=1;
		while(true)
		{
			a*=3;
			b*=2;
			if(a>b)
			{
				cout<<i<<endl;
				break;
			}
			i++;
		}
	return 0;
}
