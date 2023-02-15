#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define mod 1000000007
using namespace std;

 

int main()
{
	fast_io
    ll i,j,k,n,c=0,sus=0,l,r;
    cin>>n;
    ll a[n],s[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        s[i]=a[i];
    }
    sort(s,s+n);
    for(i=0;i<n;i++) {
        if(s[i]==a[i])
            c++;
    }
    if(c==n) {
        cout<<"yes\n1 1";
        return 0;
    }
    for(i=0;i<n-1,sus<1;) {
		if(a[i]<a[i+1]) {
            i++;
        }
        else {
            l=i;
            r=i;
            while(a[i]>a[i+1] && i<n-1) {
                i++;
                r++;
            }
            sort(a+l,a+r+1);
            sus++;
        }
    }
    for(i=0;i<n;i++) {
        if(s[i]!=a[i]) {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes\n"<<l+1<<" "<<r+1;
	return 0;
}



