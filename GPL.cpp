#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
  int t, n;
  cin>>t;
  while (t--)
  {
    long long num = 0, power2 = 1;
    cin>>n;
    string bin;
    cin>>bin;
    for(int i = n-1; i >= 0; i--)
    {
      if(bin[i] == '1'){
        power2 = pow(2, n - 1 - i);
        num += (int(bin[i]) - '0') * power2;
      }
      // power2 *= 2;
    }
    cout<<num<<endl;
    num = 0;
  }
  
  return 0;
}