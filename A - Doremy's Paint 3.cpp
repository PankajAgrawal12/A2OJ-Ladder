#include <bits/stdc++.h>
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define w(t)  \
    ll t;     \
    cin >> t; \
    while (t--)

using namespace std;

int main()
{
    fast_io
    w(t)
    {
        ll n;
        cin >> n;
        unordered_map<ll, ll> mp;
        for(ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }

        if (mp.size() == 1 || n <= 2) {
            cout << "Yes\n";
        } else if (mp.size() == 2) {
            auto it = mp.begin();
            ll a = it->second;
            ll b = (++it)->second;
            if (abs(a - b) <= 1) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
