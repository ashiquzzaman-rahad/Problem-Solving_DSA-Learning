#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int x, y;
    cin>>x>>y;
    long int m = y / x;
    // cout<<m<<endl;
    if(m*x == y)
    {
      m--;
    }
    cout<<m<<endl;
  }
}
