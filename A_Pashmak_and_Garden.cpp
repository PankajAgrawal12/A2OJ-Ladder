#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000000000000007

#define B2(n) n, n + 1, n + 1, n + 2
#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)
#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)
ll lookuptable[256] = { B6(0), B6(1), B6(1), B6(2) };
ll countSetBits(ll N)
{
    ll count = lookuptable[N & 0xff] + lookuptable[(N >> 8) & 0xff] +lookuptable[(N >> 16) & 0xff] +lookuptable[(N >> 24) & 0xff];
    return count;
}

using namespace std;

int main()
{
	fast_io
	int x1,y1,x3,y3,x4,x2,y2,y4;
    cin>>x1>>y1>>x2>>y2;
    if(x2-x1==y2-y1 || x2-x1==y1-y2)
    {
        x3 = x2;
        x4 = x1;
        y3 = y1;
        y4 = y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if(x2==x1)
    {
        y3=y1;
        y4=y2;
        x3=x1+y2-y1;
        x4=x3;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else if(y2==y1)
    {
        x3=x1;
        x4=x2;
        y3=y1+x2-x1;
        y4=y3;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }
    else
    cout<<"-1";
	return 0;
}

