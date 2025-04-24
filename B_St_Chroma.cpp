#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n, x;
    cin>>n>>x;
    for(int i = 0; i < n; i++)
    {
      if(i != x)
      {
        cout<<i<<" ";
      }
    }
    if(x < n)
    {
      cout<<x;
    }
    cout<<endl;
  }
}