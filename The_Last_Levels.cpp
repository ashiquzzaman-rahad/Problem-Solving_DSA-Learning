#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x, y, z;
    cin>>x>>y>>z;
    int time = x*y;
    if(x % 3 == 0)
    {
      time += z*((x/3)-1);
    }
    else
    {
      time += z*((x/3));
    }
    cout<<time<<endl;
  }

}
