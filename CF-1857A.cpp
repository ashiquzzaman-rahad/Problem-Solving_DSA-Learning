#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, a[50];
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int even = 0, odd = 0;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
      cin >> a[j];
      if (a[j] % 2 == 0)
      {
        even++;
      }
      else
      {
        odd++;
      }
    }
    if (odd == 0)
    {
      cout << "Yes\n";
    }
    else if (odd % 2 == 0)
    {
      cout << "Yes\n";
    }
    else
    {
      cout << "No\n";
    }
  }
  return 0;
}