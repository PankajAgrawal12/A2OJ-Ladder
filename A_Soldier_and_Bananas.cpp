#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	long long k, n, w; scanf("%lld %lld %lld\n", &k, &n, &w);
    long long cost = k * w * (w + 1) / 2;
    long long borrowed = (cost > n) ? (cost - n) : 0;
    printf("%lld\n", borrowed); 
	return 0;
}
