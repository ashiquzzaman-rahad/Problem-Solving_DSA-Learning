#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
  for(string val: s)
  {
    cout<<val<<endl;
  }
}

int main()
{
  set<string> s;
  s.insert("abc");
  s.insert("bcd");
  s.insert("fgh");
  s.insert("abc");
  print(s);

  auto it = s.find("abc");
  if(it != s.end())
  {
    // cout<<(*it)<<endl;
    s.erase(it);
  }
  else
  {
    cout<<"No value"<<endl;
  }

  print(s);
}