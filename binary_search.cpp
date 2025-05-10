#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int x)
{
  int start = 0, end = v.size() - 1;
  while(start <= end)
  {
    int mid = (start + end) / 2;
    if(v[mid] < x)
    {
      start = mid + 1;
    }
    else if(v[mid] > x)
    {
      end = mid - 1;
    }
    else
    {
      return mid;
    }
  }
  return -1;
}

int main()
{
  vector<int> v = {0,1,2,3,4,5,6,7,8,9,10};
  int index = binarySearch(v, 99);
  cout<<index<<endl;
}