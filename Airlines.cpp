#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x, n;
    cin>>x>>n;
    int air = n - (x*100), more = 0;
    if(air > 0)
    {
      if(air % 100 != 0)
      {
        more = (air / 100) + 1;
      }
      else
      {
        more = (air / 100);
      }
      cout<<more<<endl;
    }
    else
    {
      cout<<0<<endl;
    }
  }

}
