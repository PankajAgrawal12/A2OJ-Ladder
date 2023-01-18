#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;
int main()
{
	fast_io
	int n,m;
    cin>>n>>m;
    int correct[n],incorrect[m];
    for(int i=0;i<n;i++)
        cin>>correct[i];
    for(int i=0;i<m;i++)
        cin>>incorrect[i];
    sort(correct,correct+n);
    sort(incorrect,incorrect+m);
    int minn=2*correct[0];
    minn=max(minn,correct[n-1]);
    if(incorrect[0]<=minn)
        cout<<"-1\n";
    else
        cout<<minn<<endl;
	return 0;
}
