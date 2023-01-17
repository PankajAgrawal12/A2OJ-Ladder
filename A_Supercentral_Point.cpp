#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	    int n;
		cin>>n;       
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			v.push_back({x,y});
		}	
		// for(auto it:v)
		// 	cout<<it.first<<"  "<<it.second<<endl;
		int count=0;
		for(auto i:v)
		{
			int left=0,right=0,up=0,down=0;
			int x=i.first,y=i.second;
			for(auto j:v)
			{
				int x1=j.first,y1=j.second;
				if(x==x1&&y1<y)
					left++;
				else if(x==x1&&y1>y)
					right++;
				else if(y==y1&&x1>x)
					up++;
				else if(y==y1&&x1<x)
					down++;
			}
			if(left>0&&right>0&&up>0&&down>0)
				count++;
		}
		cout<<count<<endl;
	return 0;
}
