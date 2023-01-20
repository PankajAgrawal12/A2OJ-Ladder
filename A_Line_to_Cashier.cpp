
#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;

string f(ll rem)
{
	string s;
	if(rem<5)
	{
		s="O-|";
		if(rem==0)
			s+="-OOOO";
		else if(rem==1)
			s+="O-OOO";
		else if(rem==2)
			s+="OO-OO";
		else if(rem==3)
			s+="OOO-O";
		else 
			s+="OOOO-";
	}
	else
	{
		s="-O|";
		if(rem==5)
			s+="-OOOO";
		else if(rem==6)
			s+="O-OOO";
		else if(rem==7)
			s+="OO-OO";
		else if(rem==8)
			s+="OOO-O";
		else 
			s+="OOOO-";
	}
	return s;
}
int main()
{
	fast_io
	ll n;
	cin>>n;
	int arr[n];
	int maxx=INT_MAX;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		int sum=0,x;
		for(int j=0;j<arr[i];j++)
		{
			cin>>x;
			sum+=(x*5);
		}
		sum+=(arr[i]*15);
		if(sum<maxx)
			maxx=sum;
	}
	cout<<maxx<<endl;
	return 0;
}
