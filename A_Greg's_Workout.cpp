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
     scanf("%d", &n);
        const int types = 3;
        int exercise[types] = {0}; int temp = 0;
        for(int k = 0; k < n; k++)
        {
            scanf("%d", &temp);
            exercise[k % types] += temp;
        }
        if(exercise[0] > exercise[1] && exercise[0] > exercise[2])
        {
            printf("chest\n");
        }
        else if (exercise[1] > exercise[2])
        {
            printf("biceps\n");
        }
        else
        {
            printf("back\n");
        }
	return 0;
}
