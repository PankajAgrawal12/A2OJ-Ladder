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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll mx = arr[0] - 0;

        for (ll i = 0; i < n-1; i++)
        {
            if (arr[i + 1] - arr[i] > mx)
                mx = arr[i + 1] - arr[i];
        }
        if (mx < (2 * (k - arr[n - 1])))
            mx = 2 * (k - arr[n - 1]);
        cout << mx << endl;
    }

    return 0;
}
