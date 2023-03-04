#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int small[26]={0},big[26]={0};
		int count=0,minn,maxx;
		for(int i=0;i<n;i++)
		{
			char x=s[i];
			if(islower(x))
			{
				small[x-'a']++;
			}
			else
			{
				big[x-'A']++;
			}
		}
		

		for(int i=0;i<26;i++)
		{
			minn=min(small[i],big[i]);
			count+=minn;
			small[i]-=minn;
			big[i]-=minn;
		}
		int i,temp1,temp2;
		while(k>0)
		{
			for(i=0;i<26;i++)
			{
				temp1=max(small[i],big[i]);
				temp2=min(small[i],big[i]);
				int val=temp1-temp2;
				val/=2;
				if(val>k)
				{
					count+=k;
					k=0;
					break;
				}
				else
				{
					count+=val;
					k-=val;
				}
			}
			if(i==26)
				break;

		}
		cout<<count<<endl;
	}
	return 0;
}
