#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x, discount = 0;
    cin>>x;
    if(x > 100 && x <= 1000)
    {
      discount = 25;
    }
    else if(x > 1000 && x <= 5000)
    {
      discount = 100;
    }
    else if(x > 5000)
    {
      discount = 500;
    }
    cout<<x-discount<<endl;
  }
  return 0;
}