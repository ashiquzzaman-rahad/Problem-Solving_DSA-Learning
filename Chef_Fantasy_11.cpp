#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
  int ans = 1;
  for(int i = n; i > 1; i--)
  {
    ans *= i;
  }
  return ans;
}

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int ans = (factorial(n))/((factorial(n-2)));
    cout<<ans<<endl;
  }

}
