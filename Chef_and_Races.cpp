#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a, b, x, y;
    cin>>x>>y>>a>>b;
    int gold = 2;
    if(x == a || x == b)
    {
      gold--;
    }
    if(y == b || y == a)
    {
      gold--;
    }
    cout<<gold<<endl;
  }

}
