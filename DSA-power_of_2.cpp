#include<bits/stdc++.h>
using namespace std;


void isPowerOf2Loop(int num)
{
  while(num > 2)
  {
    if(num % 2 == 0)
    {
      num /= 2;
    }
    else
    {
      break;
    }
  }
  if(num == 2)
  {
    cout<<"Yes\n";
  }
  else
  {
    cout<<"No\n";
  }
}

void isPowerOf2NoLoop(int num)
{
  // cout<<(num & (num - 1))<<endl;
  if((num & (num - 1)) != 0)
  {
    cout<<"No\n";
  }
  else
  {
    cout<<"Yes\n";
  }
}

int main()
{
  int num = 0;
  cin>>num;
  isPowerOf2Loop(num);
  isPowerOf2NoLoop(num);
}