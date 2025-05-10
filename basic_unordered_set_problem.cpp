/*
Given N strings and Q queries.
In each query you are given a string
print yes if string is present
else print no
N <= 106 
IS| <= 100 
Q<=10"6 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  unordered_set<string> s;
  int n;
  cin>>n;
  while(n--)
  {
    string x;
    cin>>x;
    s.insert(x);
  }
  int q;
  cin>>q;
  while(q--)
  {
    string x;
    cin>>x;
    auto it = s.find(x);
    if(it != s.end())
    {
      cout<<"yes\n";
    }
    else
    {
      cout<<"no\n";
    }
  }
}