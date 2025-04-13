#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n, m, l, r, l1 = 0, r1 = 0;
    cin>>n>>m>>l>>r;
    for(int i = 0; i < m; i++)
    {
      if(r1 < r)
      {
        r1++;
      }
      else if(l1 > l)
      {
        l1--;
      }
    }
    cout<<l1<<" "<<r1<<endl;
  }
}