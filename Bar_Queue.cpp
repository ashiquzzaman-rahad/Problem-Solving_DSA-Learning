#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int b = 0, g = 0, i = 0;
    while(2*g >= b && i < n)
    {
      if(s[i] == 'B')
      {
        b++;
        // cout<<b<<endl;
      }
      else
      {
        g++;
      }
      i++;
    }
    cout<<b+g<<endl;
  }

}
