#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    unordered_map<string, int> um;
    for(int i = 0; i < n; i++)
    {
      string s;
      cin>>s;
      um[s]++;
    }
    cout<<um["START38"]<<" "<<um["LTIME108"]<<endl;
  }
}
