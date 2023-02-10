#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	
		
		ll n,l;
		cin>>n>>l;
		double arr[n];
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		double maxx=0;
		for(ll i=0;i<n-1;i++)
		{
			double temp=(double)(arr[i+1]-arr[i])/2;
			maxx=max(maxx,temp);
		}
		if(arr[n-1]+maxx<l)
			maxx=l-arr[n-1];
		if(arr[0]-maxx>0)
			maxx+=arr[0]-maxx;
		// cout<<setprecision(10);
		// cout<<maxx<<endl;
		printf("%0.10f", maxx); 
	return 0;
}

 
