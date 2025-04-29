#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n, a, b, even = 0, odd = 0;
    cin>>n>>a>>b;
    if(n % 2 == 0)
    {
      even = odd = n/2;
    }
    else
    {
      odd = (n/2)+1;
      even = n - odd;
    }
    cout<<even*a+odd*b<<endl;
  }

}
