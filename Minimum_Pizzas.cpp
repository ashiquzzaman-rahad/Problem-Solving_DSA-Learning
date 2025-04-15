#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x, n;
    cin>>n>>x;
    cout<<ceil(double(n*x)/4)<<endl;
  }
  return 0;
}