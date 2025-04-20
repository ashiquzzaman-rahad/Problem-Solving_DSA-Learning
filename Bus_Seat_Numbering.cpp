#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    if(1 <= n && n <= 10)
    {
      cout<<"Lower Double\n";
    }
    else if(11 <= n && n <= 15)
    {
      cout<<"Lower Single\n";
    }
    else if(16 <= n && n <= 25)
    {
      cout<<"Upper Double\n";
    }
    else if(26 <= n && n <= 30)
    {
      cout<<"Upper Single\n";
    }
  }

}
