#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x, t;
  cin>>t;
  while(t--)
  {
    cin>>n>>x;
    int numOfGrp = (n/6);
    if(n % 6 != 0)
    {
      numOfGrp++;
    }
    cout<<numOfGrp*x<<endl;
  }
}