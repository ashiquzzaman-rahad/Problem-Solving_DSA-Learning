/*
Given N strings, print unique strings
in lexiographical order

N <= 10"5

|S| <= 100000 ;
*/

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
  int n;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    string inp;
    cin>>inp;
    s.insert(inp);
  }
  
  print(s);
}