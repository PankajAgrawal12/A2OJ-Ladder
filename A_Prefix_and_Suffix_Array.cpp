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
		int n;
		cin>>n;
		vector<string> v;
		for(int i=0;i<2*n-2;i++)
		{
			string s;
			cin>>s;
			if(s.size()==n-1)
				v.push_back(s);
		}
		string temp=v[1];
		reverse(temp.begin(),temp.end());
		if(v[0]!=v[1] && v[0]!=temp)
			cout<<"NO\n";
		else
		{
			cout<<"YES\n";

		}
		
	}

	return 0;
}

