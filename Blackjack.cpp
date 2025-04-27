#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a, b, rem = 0;
    cin>>a>>b;
    rem = 21 - a - b;
    if(rem > 10)
    {
      cout<<-1<<endl;
    }
    else
    {
      cout<<rem<<endl;
    }
  }

}
