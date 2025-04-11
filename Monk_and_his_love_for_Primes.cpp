#include <bits/stdc++.h>
using namespace std;

int isPrime(long long int x)
{
  if(x == 1)
  {
    return 0;
  }
  else if(x == 2)
  {
    return 1;
  }
  else
  {
    int flag = 0;
    for(long long int i = 2; i*i <= x; i++)
    {
      if(x % i == 0)
      {
        flag = 1;
      }
    }
    if(flag == 1){
      return 0;
    }
    else
    {
      return 1;
    }
  }
}

int main()
{
  string s;
  cin>>s;
  long long int sum = 0;
  for(int i = 0; i < s.size(); i++){
    if(int(s[i]) >= 65 && int(s[i]) <= 90)
    {
      s[i] = char(int(s[i]) + 32);
      sum += int(s[i]);
    }
    else
    {
      s[i] = char(int(s[i]) - 32);
      sum -= int(s[i]);
    }
  }
  sum = abs(sum);
  cout<<isPrime(sum)<<endl;
}