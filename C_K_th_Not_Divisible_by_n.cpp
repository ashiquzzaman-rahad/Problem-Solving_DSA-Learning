#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    long long n, k, x, indivisibleNum;
    cin>>n>>k;
    if(k < n){
      cout<<k<<endl;
    }
    else
    {
      if(k % (n-1) == 0)
      {
        x = (k / (n-1)) - 1;
      }
      else
      {
        x = (k / (n-1));
      }
      indivisibleNum = (n*x)+(k-((n-1)*x));
      cout<<indivisibleNum<<endl;
    }
    // cout<<"t = "<<t<<endl;
  }
  
  return 0;
}