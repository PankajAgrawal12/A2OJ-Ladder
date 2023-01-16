#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	int  n;
    cin>>n;
    int sum=0,maxx=INT_MIN;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        sum=sum-a+b;
        maxx=max(sum,maxx);
    }
    cout<<maxx<<endl;
	return 0;
}
