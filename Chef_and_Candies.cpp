#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n, x;
    cin>>n>>x;
    int less = n - x, toBuy = 0;
    if(less > 0)
    {
      if(less % 4 != 0)
      {
        toBuy = (less / 4) + 1;
      }
      else
      {
        toBuy = less / 4;
      }
    }
    cout<<toBuy<<endl;
  }

}
