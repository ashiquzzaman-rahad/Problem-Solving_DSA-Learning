#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n, plus = 0, minus = 0;
    cin>>n;
    vector <int> a;
    for(int i = 0; i < n; i++)
    {
      int x;
      cin>>x;
      if(x == 1)
      {
        plus++;
      }
      else
      {
        minus++;
      }
      a.push_back(x);
    }
    // cout<<"plus = "<<plus<<" "<<"minus = "<<minus<<endl;
    if(n % 2 != 0)
    {
      cout<<-1<<endl;
    }
    else
    {
      cout<<(abs(plus - minus))/2<<endl;
    }
  }
}
