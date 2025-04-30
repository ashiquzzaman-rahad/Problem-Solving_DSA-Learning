#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n, count = 0, same = 0;
    cin>>n;
    string s, t;
    cin>>s>>t;
    for(int i = 0; i < n; i++)
    {
      if(s[i] != t[i] && t[i] == '0')
      {
        s[i] = '0';
        count++;
      }
      if(s[i] == t[i])
      {
        same++;
      }
    }
    // cout<<s<<t<<endl;
    if(same == n && count == 0)
    {
      cout<<"Yes\n";
    }
    else if((s == t && count > 0 && count % 2 == 0))
    {
      cout<<"Yes\n";
    }
    else
    {
      cout<<"No\n";
    }
  }
}
