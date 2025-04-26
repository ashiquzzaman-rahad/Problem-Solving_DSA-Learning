#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int arr[N];

int main()
{
  int n, q;
  cin>>n>>q;
  while(q--)
  {
    long long int a, b, d;
    cin>>a>>b>>d;
    arr[a] += d;
    arr[b+1] -= d;
  }

  for(int i = 1; i < n+1; i++)
  {
    arr[i] += arr[i-1];
  }

  long long int max = -1;
  for(int i = 1; i < n+1; i++)
  {
    if(max < arr[i])
    {
      max = arr[i];
    }
  }
  cout<<max<<endl;
}