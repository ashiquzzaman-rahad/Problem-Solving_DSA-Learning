#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n, a[100];
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int space = 0, tempSpace = 0, j = 0;
    cin >> n;
    for (j = 0; j < n; j++)
    {
      cin >> a[j];
      if (a[j] == 0)
      {
        tempSpace++;
        // cout << tempSpace << endl;
      }
      if (j == n - 1 || a[j] == 1)
      {
        // cout << "here\n";
        if (tempSpace > space)
        {
          space = tempSpace;
        }
        tempSpace = 0;
      }
    }
    cout << space << endl;
  }
  return 0;
}