#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int arr[N];

void merge(int l, int r, int mid)
{
  int left_size = mid - l + 1;
  int right_size = r - mid; // r - (mid+1) - 1
  int left_arr[left_size+1], right_arr[right_size=1];
  for(int i = 0; i < left_size; i++)
  {
    left_arr[i] = arr[i+l];
  }
  for(int i = 0; i < right_size; i++)
  {
    right_arr[i] = arr[i+(mid+1)];
  }
  left_arr[left_size] = right_arr[right_size] = INT_MAX;
  int left_index = 0, right_index = 0;
  for(int i = l; i < r+1; i++)
  {
    if(left_arr[left_index] < right_arr[right_index])
    {
      arr[i] = left_arr[left_index];
      left_index++;
    }
    else
    {
      arr[i] = right_arr[right_index];
      right_index++;
    }
  }
}

void mergeSort(int l, int r)
{
  if(l == r) return;
  int mid = (l + r) / 2;
  mergeSort(l, mid);
  mergeSort(mid+1, r);
  merge(l, r, mid);
}

int main()
{
  int n;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  mergeSort(0, n-1);
  for(int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
}