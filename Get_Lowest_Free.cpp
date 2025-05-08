#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    vector<int> a;
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
      int x;
      cin>>x;
      sum += x;
      a.push_back(x);
    }
    int min = INT_MAX;
    for(int val: a)
    {
      if(val < min)
      {
        min = val;
      }
    }
    cout<<sum-min<<endl;
  }
}
