#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.size();i++)
    {
        if(islower(s[i]))
            l++;
        else    
            u++;
    }
    if(l>u)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
   cout<<s<<endl;
        
    }
        // cout<<tolower(s)<<endl;
    else if(l<u)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
        // cout<<toupper(s)<<endl;
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
   cout<<s<<endl;
    }
        // cout<<tolower(s)<<endl;
	return 0;
}
