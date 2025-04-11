#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int h[n];
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }

  int maxSum = INT32_MAX, index = 1, sum = 0;
  for (int i = 0; i < n - k - 1; i++)
  {
    for (int j = i; j < i + k; j++)
    {
      sum += h[j];
    }

    if (sum < maxSum)
    {
      index = i + 1;
      maxSum = sum;
    }
    sum = 0;
  }
  cout<<index<<endl;
}