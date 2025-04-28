#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a, b, x, y;
    cin>>a>>b>>x>>y;
    int req = abs(a-b);
    if((a < b && req <= x) || (a > b && req <= y) || (a == b))
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }

}
