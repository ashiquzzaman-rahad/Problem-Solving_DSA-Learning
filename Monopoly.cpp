#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int p, q, r, s;
    cin>>p>>q>>r>>s;
    int sum = p+q+r+s;
    if(p > (sum-p) || q > (sum-q) || r > (sum-r) || s > (sum-s))
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
}
