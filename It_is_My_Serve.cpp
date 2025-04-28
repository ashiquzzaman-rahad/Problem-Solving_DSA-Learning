#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int p, q;
    cin>>p>>q;
    int total = p+q;
    if(total%4 == 0 || total%4 == 1)
    {
      cout<<"Alice\n";
    }
    else if(total%4 == 2 || total%4 == 3)
    {
      cout<<"Bob\n";
    }

  }

}
