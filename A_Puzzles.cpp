#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007

#define B2(n) n, n + 1, n + 1, n + 2
#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)
#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)
ll lookuptable[256] = { B6(0), B6(1), B6(1), B6(2) };
ll countSetBits(ll N)
{
    ll count = lookuptable[N & 0xff] + lookuptable[(N >> 8) & 0xff] +lookuptable[(N >> 16) & 0xff] +lookuptable[(N >> 24) & 0xff];
    return count;
}

using namespace std;

int main()
{
	fast_io
	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];
	sort(arr,arr+m);
	int diff=arr[n-1]-arr[0];
	for(int i=0;i<m-n+1;i++)
	{
		if(arr[n+i-1]-arr[i]<diff)
        diff=arr[n+i-1]-arr[i];
		
	}
	cout<<diff<<endl;
	
	return 0;
}
