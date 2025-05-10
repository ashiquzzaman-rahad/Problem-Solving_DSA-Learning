#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> s)
{
  for(string val: s)
  {
    cout<<val<<endl;
  }
}

int main()
{
  unordered_set<string> s;
  s.insert("abc");
  s.insert("fgh");
  s.insert("bcd");
  // s.insert("abc");
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

  // print(s);
}