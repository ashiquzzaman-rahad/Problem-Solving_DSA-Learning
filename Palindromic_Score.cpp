#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x[3], n, max = 0, maxInd = 0;
    for (int i = 0; i < 3; i++)
    {
      cin >> x[i];
      if (max <= x[i])
      {
        max = x[i];
        maxInd = i;
      }
    }
    x[maxInd] = 0;
    max = 0, maxInd = 0;
    int even = 0, sum = 0, min = 9999, zero = 0, odd = 0;
    for (int i = 0; i < 3; i++)
    {
      if (x[i] != 0 && x[i] % 2 == 0)
      {
        even++;
      }
      if (x[i] != 0 && x[i] % 2 != 0)
      {
        odd++;
      }
      sum += x[i];
      if (max <= x[i])
      {
        max = x[i];
        maxInd = i;
      }
      if (min >= x[i] && x[i] != 0)
      {
        min = x[i];
      }
      if (x[i] == 0)
      {
        zero++;
      }
    }
    // cout<<max<<min<<endl;
    if (zero == 3)
    {
      cout << 0 << endl;
    }
    else if (even == 1 || even == 2 || odd == 1)
    {
      cout << sum << endl;
    }
    else
    {
      cout<<max+min-1<<endl;
    }
  }
}
