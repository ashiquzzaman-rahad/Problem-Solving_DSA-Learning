#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    int n = int(s[i] - '0');
    // cout<<n<<endl;
    if (i == 0 && n == 9)
    {
      cout << n;
    }
    else
    {
      if (n < 5)
      {
        cout << n;
      }
      else
      {
        cout << 9 - n;
      }
    }
  }
  cout << endl;
  return 0;
}