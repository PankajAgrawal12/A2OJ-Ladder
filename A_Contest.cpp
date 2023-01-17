#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	double a,b,c,d;
    cin>>a>>b>>c>>d;
    double misha,vasya;
    double t1=(3*a/10);
    double t2=(a-(a*c/250));
    misha=max(t1,t2);
    t1=(3*b/10);
    t2=(b-(b*d/250));
    vasya=max(t1,t2);
    if(vasya>misha)
        cout<<"Vasya\n";
    else if(misha>vasya)
        cout<<"Misha\n";
    else    
        cout<<"Tie\n";

	return 0;
}
