#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int r, sum = 0;
    for(int i = 0; i < 4; i++)
    {
      cin>>r;
      sum += r;
    }
    if(sum == 0)
    {
      cout<<"IN\n";
    }
    else
    {
      cout<<"OUT\n";
    }
  }

}
