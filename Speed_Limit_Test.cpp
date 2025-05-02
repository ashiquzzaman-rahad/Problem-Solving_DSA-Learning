#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a, x, b, y;
    cin>>a>>x>>b>>y;
    double alice = double(a)/x, bob = double(b)/y;
    // cout<<alice<<" "<<bob<<endl;
    if(alice > bob)
    {
      cout<<"Alice\n";
    }
    else if(bob > alice)
    {
      cout<<"Bob\n";
    }
    else
    {
      cout<<"Equal\n";
    }
  }
}
