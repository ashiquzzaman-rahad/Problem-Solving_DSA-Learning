#include<bits/stdc++.h>
using namespace std;
const int N = 110;
int arr[N];
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    for(int i = 0; i < N; i++)
    {
      arr[i] = 0;
    }
    int a[n];
    for(int i = 0; i < n; i++)
    {
      cin>>a[i];
      arr[a[i]]++;
    }
    int count = 0;
    for(int i = 0; i < N; i++)
    {
      if(arr[i] != 0)
      {
        count++;
      }
    }
    cout<<count<<endl;
  }
}