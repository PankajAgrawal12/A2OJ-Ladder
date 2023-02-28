#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007

using namespace std;


int main()
{
	fast_io
	ll n,m;
    cin>>n>>m;
    int arr[m];
    for(ll i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    bool flag=true;
    sort(arr,arr+m);
    if(arr[0]==1 || arr[m-1]==n)
        cout<<"NO\n";
    else
    {
        int i=0;
        for(i=0;i<m-2;i++)
        {
            if(arr[i+1]-arr[i]==1)
            {
                if(arr[i+2]-arr[i+1]==1)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	return 0;
}
