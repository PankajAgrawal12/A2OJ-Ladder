#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	int a,b;
    cin>>a>>b;
    int win=0,loose=0,draw=0;
    for(int i=1;i<=6;i++)
    {
        if(abs(i-a)<abs(i-b))
            win++;
        else if(abs(i-a)>abs(i-b))
            loose++;
        else
            draw++;
    }
    cout<<win<<" "<<draw<<" "<<loose<<"\n";
}
