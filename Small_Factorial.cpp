#include <bits/stdc++.h>
using namespace std;

long long int factorial(int n)
{
  long long int ans = 1;
  for(int i = 2; i <= n; i++)
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
    cout<<factorial(n)<<endl;
  }
}
