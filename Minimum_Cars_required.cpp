#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int n, cars = 0;
    cin>>n;
    if(n % 4 == 0)
    {
      cars = n / 4;
    }
    else
    {
      cars = (n/4) + 1;
    }
    cout<<cars<<endl;
  }
}
