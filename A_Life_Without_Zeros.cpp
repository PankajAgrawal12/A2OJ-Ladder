#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	ll a,b;
	cin>>a>>b;
	vector<ll> v1,v2,v3;
	ll result=a+b;
	// cout<<result<<endl;
	while(result)
	{
		ll rem=result%10;
		if(rem!=0)
			v3.push_back(rem);
		result/=10;
	}
	reverse(v3.begin(), v3.end());
	result=0;
	 for(ll i=0;i<v3.size();i++)
	 {
		result+=v3[i];
		result*=10;
	 }
	 result/=10;
	while(a)
	{
		ll rem=a%10;
		if(rem!=0)
			v1.push_back(rem);
		a/=10;
	}
	while(b)
	{
		ll rem=b%10;
		if(rem!=0)
			v2.push_back(rem);
		b/=10;
	}
	 reverse(v1.begin(), v1.end());
	 reverse(v2.begin(), v2.end());
	 a=0,b=0;
	 for(ll i=0;i<v1.size();i++)
	 {
		a+=v1[i];
		a*=10;
	 }
	 a/=10;
	 for(ll i=0;i<v2.size();i++)
	 {
		b+=v2[i];
		b*=10;
	 }
	 b/=10;
	//  cout<<a<<"  "<<b<<"  "<<result<<endl;
	//  cout<<a<<"  "<<b<<"  "<<result<<endl;
	 if(a+b==result)
	 	cout<<"YES\n";
	 else	
	 	cout<<"NO\n";


	return 0;
}
