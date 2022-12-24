#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000000000000007

#define B2(n) n, n + 1, n + 1, n + 2
#define B4(n) B2(n), B2(n + 1), B2(n + 1), B2(n + 2)
#define B6(n) B4(n), B4(n + 1), B4(n + 1), B4(n + 2)
ll lookuptable[256] = { B6(0), B6(1), B6(1), B6(2) };
ll countSetBits(ll N)
{
    ll count = lookuptable[N & 0xff] + lookuptable[(N >> 8) & 0xff] +lookuptable[(N >> 16) & 0xff] +lookuptable[(N >> 24) & 0xff];
    return count;
}

using namespace std;

int main()
{
	fast_io
	int N;
	cin>>N;
	vector<int> one,two,three;
	for(int i=0;i<N;i++)
	{
		int x;
		cin>>x;
		if(x==1)
			one.push_back(i+1);
		else if(x==2)
			two.push_back(i+1);
		else
			three.push_back(i+1);
	}
	int n=min(one.size(),min(two.size(),three.size()));
	if(n==0)
		cout<<"0\n";
	else
	{
		cout<<n<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
		}
	}
	return 0;
}

