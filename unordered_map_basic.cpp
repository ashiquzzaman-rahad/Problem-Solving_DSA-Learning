#include<bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map<int, string> m;
  m[1] = "abc";
  m[5] = "cdc";
  m[3] = "acd";
  m.insert({4, "afg"});

  unordered_map<int, string> ::iterator it;
  for(it = m.begin(); it != m.end(); it++)
  {
    cout<<it->first<<" "<<it->second<<endl;
  }

  for(auto &pr: m)
  {
    cout<<pr.first<<" "<<pr.second<<endl;
  }

  auto itf = m.find(3);
  if(itf == m.end())
  {
    cout<<"No value\n";
  }
  else
  {
    cout<<itf->first<<" "<<itf->second<<endl;
  }

  // m.erase(3);
  
  auto ite = m.find(5);
  m.erase(ite);
  for(auto &pr: m)
  {
    cout<<pr.first<<" "<<pr.second<<endl;
  }

}
