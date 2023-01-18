#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	ll n,k;
    cin>>n>>k;
    ll count=0;
    for(int i=0;i<n;i++)
    {
        ll x,tempcount=0;
        cin>>x;
        while(x>0)
        {
            ll rem=x%10;
            if(rem==4 || rem==7)
                tempcount++;
            x/=10;
        }
        if(tempcount<=k)
            count++;
    }
    cout<<count<<endl;
	return 0;
}
