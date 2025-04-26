#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x, y;
    cin>>x>>y;
    int gap = y - x;
    if (gap % 8 == 0)
    {
      cout<<(gap/8)<<endl;
    }
    else
    {
      cout<<(gap/8)+1<<endl;
    }
  }

}
