#include <bits/stdc++.h>
using namespace std;

void isPrime(int n)
{
  if(n == 1)
  {
    cout<<"no\n";
  }
  else if(n == 2)
  {
    cout<<"yes\n";
  }
  else
  {
    int flag = 0;
    for(int i = 2; i*i <= n; i++)
    {
      if(n % i == 0)
      {
        cout<<"no\n";
        flag = 1;
        break;
      }
    } 
    if(flag == 0)
    {
      cout<<"yes\n";
    }
  }
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    isPrime(n);
  }
}
