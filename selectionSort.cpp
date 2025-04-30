#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  for(int i = 0; i < n; i++)
  {
    int maxIndex = i;
    for(int j = i+1; j < n; j++)
    {
      if(a[maxIndex] > a[j])
      {
        maxIndex = j;
      }
    }
    swap(a[i], a[maxIndex]);
  }
  for(int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
}