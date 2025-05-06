#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    int a, b, k;
    cin>>a>>b>>k;
    int l = abs(a-b);
    if(l % k == 0)
    {
      cout<<l/k<<endl;
    }
    else
    {
      cout<<(l/k)+1<<endl;
    }
  }
}

