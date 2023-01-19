#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
		ll s;
		cin>>s;
		ll original=s;
		int count=0;
		while(true)
		{
			ll temp=abs(original+1);
			while(temp>0)
			{
				ll rem=temp%10;
				if(abs(rem)==8)
				{
					cout<<original+1-s<<endl;
					count++;
					break;
				}
				else
				temp/=10;
			}
			original++;
			if(count>0)
				break;
		}
	return 0;
}
