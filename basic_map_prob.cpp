// Given N strings, print unique strings in lexiographical order with their frequency
// N <= 10^5
// |s| <= 100
// input:
/*
abc
def
abc
ghj
jkl
ghj
ghj
abc
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> m;
  int n;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    string s;
    cin>>s;
    m[s]++;
  }

  for(auto &ptr: m)
  {
    cout<<ptr.first<<" -> "<<ptr.second<<endl;
  }
}