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
    map<char,int> mp;
    for(int i=0;i<s.size();i++)
        mp[s[i]]++;
    int count=0;
    for(auto it:mp)
    {
        if(it.second%2==1)
            count++;
    }
    count--;
    if(count%2==1)
        cout<<"Second\n";
    else    
        cout<<"First\n";
    // cout<<sum-1<<endl;
	return 0;
}
