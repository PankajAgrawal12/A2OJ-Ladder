
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
	vector<string> v;
	if(n==0)
		cout<<"O-|-OOOO"<<endl;
	else
	{
	while(n)
	{
		ll rem=n%10;
		v.push_back(f(rem));
		n/=10;
	}
	reverse(v.begin(),v.end());
	for(ll i=v.size()-1;i>=0;i--)
		cout<<v[i]<<endl;

	}
	return 0;
}
