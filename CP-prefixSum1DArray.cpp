/*
Given array a of N integers. Given Q queries
and in each query given L and R print sum of
array elemnts from index L to R(L, R included)

Constraints
1 <= N <= 10^5
1 <= ali] <= 10^9
1 <= Q <= 10^5
1<=1L, R<=N
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long a[N];
long long pf[N];

int main()
{
  int n;
  cin>>n;
  for(int i = 1; i <= n; i++)
  {
    cin>>a[i];
    pf[i] = pf[i-1] + a[i];
  }

  int q;
  cin>>q;
  while(q--)
  {
    int l, r;
    cin>>l>>r;
    cout<<pf[r]-pf[l-1]<<endl;
  }

  return 0;
}