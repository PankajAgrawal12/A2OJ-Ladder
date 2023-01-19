#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	ll digit,sum;
	cin>>digit>>sum;
	if(digit==1){
		cout<<sum<<endl;
	}
	else if((digit>1&&sum==0)){
		cout<<"No solution\n";
	}
	else if(digit>1)
	{
		cout<<sum;
		for(ll i=1;i<digit;i++)
			cout<<"0";
		cout<<endl;
	}
	
	return 0;
}
