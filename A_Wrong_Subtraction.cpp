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
    while(k--)
    {
        if(n%10==0)
            n/=10;
        else    
            n--;
    }
    cout<<n<<endl;
	return 0;
}
