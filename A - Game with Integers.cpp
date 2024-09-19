#include <bits/stdc++.h>
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define w(t)  \
    ll t;     \
    cin >> t; \
    while (t--)
#define MOD 1000000007

using namespace std;

int main()
{
    fast_io
    w(t)
    {
        ll n;
        cin >> n;
        if((n+1)%3==0 || (n-1)%3==0)
            cout<<"First\n";
        else
            cout<<"Second\n";
    }

    return 0;
}
