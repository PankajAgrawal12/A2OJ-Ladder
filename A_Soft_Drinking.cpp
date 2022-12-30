#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
  		int n,k,l,c,d,p,nl,np;
	    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	    int litre=(k*l)/(n*nl);
	    int slice=(c*d)/n;
	    int salt=p/(n*np);
	    cout<<min(salt,min(litre,slice))<<endl;
	    
		
		
	return 0;
}
