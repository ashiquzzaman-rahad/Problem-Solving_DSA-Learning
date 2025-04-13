#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s, newName;
    for(int i = 0; i < 3; i++)
    {
      cin>>s;
      newName.push_back(s[0]);
    }
    cout<<newName<<endl;
  }
}