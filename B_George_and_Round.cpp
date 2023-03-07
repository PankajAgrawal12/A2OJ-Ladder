#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;


int main()
{
	fast_io
	int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int x = 0, y = 0, count = 0;
    while (y < m && x < n) {
        if (b[y] >= a[x]) {
            count++;
            //y++;
            x++;
        }
        y++;
    }
    cout << n - count;
	return 0;
}

