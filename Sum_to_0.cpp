#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(n == 1)
    {
      cout<<-1<<endl;
    }
    else if(n % 2 == 0)
    {
      for(int i = 1; i < n+1; i++)
      {
        if(i % 2 == 0)
        {
          cout<<1<<" ";
        }
        else
        {
          cout<<-1<<" ";
        }
      }
      cout<<endl;
    }
    else if(n % 2 != 0)
    {
      cout<<1<<" "<<2<<" "<<-3<<" ";
      for(int i = 4; i < n+1; i++)
      {
        if(i % 2 == 0)
        {
          cout<<1<<" ";
        }
        else
        {
          cout<<-1<<" ";
        }
      }
      cout<<endl;
    }
  }
}
