#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	int n,skip;
	cin>>n>>skip;
	int sum=0;
	int start[n],end[n];
	for(int i=0;i<n;i++)
	{
		cin>>start[i]>>end[i];
		// sum+=end[i]-start[i]+1;
	}
	// cout<<sum<<".....\n";
	int i=1,j=0;
	while(i<=end[n-1])
	{
		if(i+skip<=start[j])
		{
			i+=skip;
		}
		else if(i+skip>start[j])
		{
			sum+=end[j]-i+1;
			i=end[j]+1;
			j++;
			// cout<<sum<<"  ";
		}
		
	}
	cout<<sum<<endl;
}
