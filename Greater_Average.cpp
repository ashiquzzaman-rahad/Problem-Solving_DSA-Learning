#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, t;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>c;
    if(double(a+b)/2 > double(c))
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
}