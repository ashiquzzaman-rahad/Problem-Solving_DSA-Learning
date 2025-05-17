#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedBook)
{
  int student = 1, pages = 0;
  for(int i = 0; i < n; i++)
  {
    if(arr[i] > maxAllowedBook)
    {
      return false;
    }
    if(maxAllowedBook >= pages + arr[i])
    {
      pages += arr[i];
    }
    else
    {
      student++;
      pages = arr[i];
    }
  }

  if(student == m)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int allocateBooks(vector<int> &arr, int n, int m)
{
  if(n < m)
  {
    return -1;
  }

  int sum = 0;
  for(int &val: arr)
  {
    sum += val;
  }

  int start = 0, end = sum, ans = -1;
  while(start <= end)
  {
    int mid = start + ((end - start) / 2);
    if(isValid(arr, n, m, mid))
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  return ans;
}

int main()
{
  vector<int> arr = {15, 17, 20};
  int n = 3, m = 2;

  cout<<allocateBooks(arr, n, m)<<endl;
  return 0;
}