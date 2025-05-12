#include<bits/stdc++.h>
using namespace std;

int main()
{
  set<long long> s;
  long x,y,q;
  cin>>q;
  while(q--)
  {
    cin>>y>>x;
    if(y == 1)
    {
      s.insert(x);
    }
    else if(y == 2)
    {
      s.erase(x);
    }
    else
    {
      auto it = s.find(x);
      if(it == s.end())
      {
        cout<<"No\n";
      }
      else
      {
        cout<<"Yes\n";
      }
    }
  }
}