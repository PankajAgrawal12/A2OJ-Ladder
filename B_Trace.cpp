#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
 
int main()
{
 
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
 
  double pie = 3.1415926536;
  sort(a, a + n);
 
  double sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
      sum1 += (double)(a[i]) * (double)(a[i]);
    else
      sum2 += (double)(a[i]) * (double)(a[i]);
  }
  cout << fixed << setprecision(10) << pie * abs(sum1 - sum2);
 
  return 0;
}
