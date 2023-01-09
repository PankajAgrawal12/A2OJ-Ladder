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
		set<char> st;
		for(int i=0;i<s.size();i++)
		{
			st.insert(s[i]);
		}
		if(st.size()%2==0)
			cout<<"CHAT WITH HER!\n";
		else	
			cout<<"IGNORE HIM!\n";

	
	return 0;
}
