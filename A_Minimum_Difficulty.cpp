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
    int arr[n];
	vector<int> v;
    for(int i=0;i<n;i++)
	{
        cin>>arr[i];
		v.push_back(arr[i]);
	}
    int minDistance=INT_MAX,remove=0;
    for(int i=0;i<n-2;i++)
    {
        int distance=arr[i+2]-arr[i];
        if(distance<minDistance)
        {
            minDistance=distance;
            remove=arr[i+1];
        }
    }
	v.erase(find(v.begin(),v.end(),remove));
	int maxx=INT_MIN;
	for(int i=0;i<v.size();i++)
	{
		int distance=v[i+1]-v[i];
		if(distance>maxx)
		{
			maxx=distance;
		}
	}
	cout<<maxx<<endl;
    return 0;
}
