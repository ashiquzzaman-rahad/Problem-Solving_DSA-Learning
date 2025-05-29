#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin>>n;
    int count2 = 0, count3 = 0;
    while(n % 3 == 0)
    {
      count3++;
      n /= 3;
    }
    while (n % 2 == 0)
    {
      count2++;
      n /= 2;
    }

    if(n == 1 && count2 <= count3)
    {
      cout<<2*count3 - count2<<endl;
    }
    else
    {
      cout<<-1<<endl;
    }
    
  }
}