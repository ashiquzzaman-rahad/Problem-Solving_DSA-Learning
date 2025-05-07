#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int h, x, y;
    cin>>h>>x>>y;
    int rem = h - y;
    int count = 1;
    if(rem > 0)
    {
      if(rem % x == 0)
      {
        count += rem / x;
      }
      else
      {
        count += (rem / x) + 1;
      }
    }
    cout<<count<<endl;
  }
}
