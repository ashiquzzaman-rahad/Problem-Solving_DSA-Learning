#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a, count = 0;
    for(int i = 0; i < n; i++)
    {
      cin>>a;
      if(a >= 10 && a <= 60)
      {
        count++;
      }
    }
    cout<<count<<endl;
  }
}
