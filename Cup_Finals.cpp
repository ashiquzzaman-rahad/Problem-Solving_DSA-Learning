#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x, y, d;
    cin>>x>>y>>d;
    if(abs(x-y) <= d)
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
}
