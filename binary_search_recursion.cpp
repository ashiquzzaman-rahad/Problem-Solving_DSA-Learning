#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int x, int start, int end)
{
  int mid = start + ((end - start) / 2);
  if(v[mid] > x)
  {
    return binarySearch(v, x, start, mid-1);
  }
  else if(v[mid] < x)
  {
    return binarySearch(v, x, mid+1, end);
  }
  else
  {
    return mid;
  }

  return -1;
}

int main()
{
  vector<int> v = {0,1,2,3,4,5,6,7,8,9,10};
  int index = binarySearch(v, 3, 0, v.size()-1);
  cout<<index<<endl;
}