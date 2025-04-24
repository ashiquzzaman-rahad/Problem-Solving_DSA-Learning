#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    int res = x % 3;
    switch (res)
    {
    case 0:
      cout << "NORMAL\n";
      break;
    case 1:
      cout << "HUGE\n";
      break;
    case 2:
      cout << "SMALL\n";
      break;
    }
  }
}
