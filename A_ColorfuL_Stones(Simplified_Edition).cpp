#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	string a,b;
    cin>>a>>b;
    int i=0,j=0;
    while(j<b.size())
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else
        j++;
    }
   cout<<i+1<<endl;
	return 0;
}
