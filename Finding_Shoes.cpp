#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    int left, right, ans = 0;
    left = right = n;
    if(n < m)
    {
      ans = n;
    } 
    else
    {
      ans = 2*n - m;
    }
    cout<<ans<<endl;
  }

}
