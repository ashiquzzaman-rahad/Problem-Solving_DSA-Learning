#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x, y, r;
    cin>>x>>y>>r;
    int sticks = x + (r/30);
    int ans = sticks/y;
    if(sticks % y != 0)
    {
      ans++;
    }
    cout<<ans<<endl;
  }

}
