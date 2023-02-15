#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;

 

int main()
{
	fast_io
    int n,m;
    cin>>n>>m;
    unordered_map<string,string> mp;
    while(m--)
    {
        string a,b;
        cin>>a>>b;
        mp.insert({a,b});
    }
    
    string ans="";
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a;
        int q1=a.size();
        b=mp[a];
        int q2=b.size();
        if(q1==q2)
            cout<<a<<" ";
        else if(q1<q2)
            cout<<a<<" ";
        else 
            cout<<b<<" ";

    }
	return 0;
}



