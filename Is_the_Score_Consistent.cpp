#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a, b;
    cin>>a>>b;
    int c, d;
    cin>>c>>d;
    if(c >= a && d >= b){
      cout<<"POSSIBLE\n";
    }
    else
    {
      cout<<"IMPOSSIBLE\n";
    }
  }

}
