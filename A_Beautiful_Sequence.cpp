#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
 
using namespace std;
 
int main()
{
	fast_io
  w(t)
  {
    ll  n;
    cin>>n;
    ll arr[n];
    bool flag=false;
    for(int i=0;i<n;i++)
      cin>>arr[i];
      
    for(int i=0;i<n;i++)
    {
      int count=i+1;
      if(arr[i]<=count)
      {
        flag=true;
        break;
      }
    }
    if(flag==true)
      cout<<"YES\n";
    else
      cout<<"NO\n";
  }
	return 0;
}
