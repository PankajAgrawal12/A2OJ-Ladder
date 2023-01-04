#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int temp=arr[k-1];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=temp&&arr[i]>0)
                ans++;
        }
        cout<<ans<<endl;
        
}
