#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;

int main()
{
	fast_io
	w(t)
	{
	   ll n,k;
	   cin>>n>>k;
	   vector<ll> arr;
	   for(ll i=0;i<n;i++)
	   {
	   	int temp;
		cin>>temp;
		arr.push_back(temp);
	   }
	   ll temp=0;
	   ll index=1;
	   for(auto it:arr)
	   {
		if(it==index)
		{
			temp++;
			index++;
		}
	   }
	   ll s=n-temp;
	   if(s%k==0)
	   	cout<<s/k<<endl;
	   else	
	   	cout<<s/k +1<<endl;
	    
	}
	return 0;
}
