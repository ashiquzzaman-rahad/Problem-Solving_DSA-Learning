#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int i = 0;
    int x = 2+(i*7);
    while(x <= n)
    {
      i++;
      x = 2+(i*7);
    }
    cout<<i<<endl;
  }
}
