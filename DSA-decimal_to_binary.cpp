#include<bits/stdc++.h>
using namespace std;

int main()
{
  int decimalNum = 0;
  cin>>decimalNum;
  
  int ans = 0, pow = 1, rem = 0;
  while(decimalNum > 0)
  {
    rem = decimalNum % 2;
    decimalNum = decimalNum / 2;
    ans += rem*pow;
    pow = pow*10;
  }
  cout<<ans<<endl;
}