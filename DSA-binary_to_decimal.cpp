#include<bits/stdc++.h>
using namespace std;

int main()
{
  int binaryNum = 0;
  cin>>binaryNum;

  int ans = 0, powOf2 = 1;
  while(binaryNum > 0)
  {
    int lastDigit = binaryNum % 10;
    binaryNum /= 10;
    ans += lastDigit*powOf2;
    powOf2 *= 2;
  }
  cout<<ans<<endl;
}