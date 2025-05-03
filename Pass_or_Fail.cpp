#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n, x, p;
    cin>>n>>x>>p;
    int marks = x*3 - (n-x);
    if(p > marks)
    {
      cout<<"FAIL\n";
    }
    else
    {
      cout<<"PASS\n";
    }
  }
}
