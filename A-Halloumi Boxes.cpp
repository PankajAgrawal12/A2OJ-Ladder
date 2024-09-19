#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	fast_io
    w(t)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll x=arr[0];
        if(k>1)
            cout<<"YES\n";
        else
        {
             bool flag=true;
            for(ll i=1;i<n;i++)
            {
                if(arr[i-1]>arr[i])
                {
                    flag=false;
                    cout<<"NO\n";
                    break;
                }
            }
            if(flag)
                cout<<"YES\n";
        }
        // if(k>=2 || n==k)
        //     cout<<"YES\n";
        // else
        // {
        //    
        // }

    }
    
	return 0;
}
