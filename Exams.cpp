#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x, y, z;
    cin>>x>>y>>z;
    if(z > (x*y)/2)
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
}
