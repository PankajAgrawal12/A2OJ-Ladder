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
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		if(arr[0]==1)
			arr[0]++;
		for(int i=1;i<n;i++)
		{
			if(arr[i]==1 && i<n-1)
				arr[i]++;
			if(arr[i]%arr[i-1]==0)
				arr[i]++;
		}
		for(auto it:arr)
			cout<<it<<" ";
		cout<<endl;
		
	}

	return 0;
}

