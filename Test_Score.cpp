#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n, x, y;
    cin>>n>>x>>y;
    int numOfQues = y / x;
    if(y % x == 0 && numOfQues <= n)
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
}
