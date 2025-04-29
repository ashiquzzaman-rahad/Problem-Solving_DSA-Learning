#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int s, x, y, z;
    cin>>s>>x>>y>>z;
    int left_storage = s - (x+y);
    if(left_storage < z)
    {
      if(z <= s-x || z <= s-y)
      {
        cout<<1<<endl;
      }
      else
      {
        cout<<2<<endl;
      }
    }
    else
    {
      cout<<0<<endl;
    }
  }

}
