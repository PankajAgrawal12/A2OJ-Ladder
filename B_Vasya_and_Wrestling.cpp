#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	ll  n;
	cin >> n;
    vector<ll> a1, a2;
    ll sum_1 = 0;
    ll sum_2 = 0;
    ll last = 0;
    for(ll i=0; i<n; i++)
    {
        ll x;cin>>x;
        if(i == n-1)
        {
            last = x;
        }
        if(x >= 0)
        {
            a1.push_back(x);
            sum_1 += x;
 
        }
        else
        {
            x *= -1;
            a2.push_back(x);
            sum_2 += x;
        }   
    }
    if(sum_1 > sum_2)
    {
        cout << "first\n";
    }
    else if (sum_1 < sum_2)
    {
        cout << "second\n";
    }
    else
    {
        if(a1 > a2)
        {
            cout << "first\n";
        }
        else if(a1 < a2)
        {
            cout << "second\n";
        }
        else
        {
            if(last > 0)
            {
                cout << "first\n";
            }
            else
            {
                cout << "second\n";
            }
        }
    
    }
		
	return 0;
}
