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
    int odd=0,sumDown=0;
    int pairity=0;
    for(int i=0;i<n;i++)
    {
        int up,down;
        cin>>up>>down;
        sumUp+=up;
        sumDown+=down;
        if(up%2!=down%2)
            pairity++;
    }
   if(sumUp%2==0&& sumDown%2==0)
    cout<<"0\n";
    else if(sumUp%2!=sumDown%2)
        cout<<"-1\n";
    else if(pairity>0)
        cout<<"1\n";
    else    
        cout<<"-1\n";
	return 0;
}
