#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    if (n == 1)
    {
      cout << 1 << endl;
    }
    else
    {
      long long int a[60];
      a[0] = 1, a[1] = 1;
      cout << 1 << endl;
      cout << a[0] << " " << a[1] << endl;
      long long int numOfCurrentElement = 3, numOfPrevElement = 2;
      for (long long int i = 3; i <= n; i++)
      {
        long long int start = 0;
        long long int temp = a[start];
        while (start < numOfPrevElement - 1)
        {
          long long int num = temp + a[start + 1];
          start++;
          temp = a[start];
          a[start] = num;
        }
        a[numOfCurrentElement - 1] = 1;

        for (long long int j = 0; j < numOfCurrentElement; j++)
        {
          cout << a[j] << " ";
        }
        cout << endl;
        numOfCurrentElement++;
        numOfPrevElement++;
      }
    }
  }
}