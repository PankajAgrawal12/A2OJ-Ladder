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
        string s;
        cin >> s;
        ll e = 0, b = 0, ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i + 2 < n && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                ans = 2;
                break;
            }
            else if (s[i] == '#')
                b++;
        }
        if (ans == 2)
            cout << ans << endl;
        else
        {
            if (b == n)
                b = 0;
            else
                b=n-b;
        cout << b << endl;
        }
    }

    return 0;
}
