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
		if(n%2==0)
		{
			cout<<"YES\n";
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
					cout<<"1 ";
				else	
					cout<<"-1 ";
			}
			cout<<endl;
		}
		else
		{
			if(n==3)
				cout<<"NO\n";
			else
			{
				cout<<"YES\n";
				for(int i=0;i<n;i++)
				{
					int temp=n/2;
					if(i%2==0)
						cout<<-temp+1<<" ";
					else	
						cout<<temp<<" ";
				}
				cout<<endl;
			}
			

		}
	
		
		
		
		
	}
	return 0;
}
