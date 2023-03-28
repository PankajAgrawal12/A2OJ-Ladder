#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007

using namespace std;

int main()
{
	fast_io
	    int n,m;
		cin>>n>>m;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int sum=0;
		int i=0;
		while(m--)
		{
			if(arr[i]<=0)
				sum+=abs(arr[i]);
			else
				break;
			i++;
		}
		cout<<sum<<endl;
	return 0;
}
