#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007

using namespace std;

ll fun(ll n,ll x,ll y)
{
    if(n==1)
        return x;
    if(n==2)
        return y;
    else
        return (fun(n-1,x,y)%mod+fun(n+1,x,y)%mod);
}

int main()
{
	fast_io
	long x, y; scanf("%ld %ld\n", &x, &y);
    long n(0); scanf("%ld", &n);

    long output(0);

    if(n % 6 == 0){output = x - y;}
    else if(n % 6 == 1){output = x;}
    else if(n % 6 == 2){output = y;}
    else if(n % 6 == 3){output = y - x;}
    else if(n % 6 == 4){output = -x;}
    else if(n % 6 == 5){output = -y;}

    const long M = 1000000007;
    if(output < 0){output += 2 * M;}
    printf("%ld\n", output % M );
    
	return 0;
}
