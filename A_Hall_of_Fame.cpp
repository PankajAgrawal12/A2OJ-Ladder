#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	w(t)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int left=0,right=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                    left++;
            }
            else    
            {
                right++;
            }
        }
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='L' && s[i+1]=='R'){
                ans=i+1;
            }
        }
        if(left==0||right==0)
            cout<<"-1\n";
        else if(ans!=0)
            cout<<ans<<"\n";
        else
            cout<<"0\n";
    }
}
