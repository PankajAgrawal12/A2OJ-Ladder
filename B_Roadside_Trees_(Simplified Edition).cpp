#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007

using namespace std;


int main()
{
	fast_io
	int n;
    cin>>n;
    int arr[n+1];
    int sum=0,curr=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr[n]=arr[n-1];
    for(int i=0;i<n;i++)
    {
        int climb=arr[i]-curr;
        sum+=climb+1;
        curr=arr[i];
        if(curr>arr[i+1])
        {
            sum+=curr-min(curr,arr[i+1])+1;
            curr=min(curr,arr[i+1]);
        }
        else
        { 
            sum++;
        }
    }
    cout<<sum-1<<endl;
	return 0;
}
