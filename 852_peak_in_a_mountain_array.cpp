#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) 
{
  int start = 1, end = arr.size() - 2;
  while(start <= end)
  {
    int mid = start + ((end - start) / 2);
    if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;

    if(arr[mid - 1] < arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  return -1;
}

int main()
{
  vector<int> arr = {0,3,8,9,5,2};
  int peak = peakIndexInMountainArray(arr);
  cout<<peak<<endl;

  vector<int> arr2 = {0,10,5,2};
  peak = peakIndexInMountainArray(arr2);
  cout<<peak<<endl;

}