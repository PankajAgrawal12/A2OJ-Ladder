#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum>=2)
            ans++;
    }
    cout<<ans<<endl;
}
