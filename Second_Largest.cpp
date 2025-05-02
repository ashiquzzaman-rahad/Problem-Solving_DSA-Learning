#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int sum = a[0]+a[1]+a[2];
    int maxNum = INT_MIN, minNum = INT_MAX;
    for(int i = 0; i < 3; i++)
    {
      maxNum = max(maxNum, a[i]);
      minNum = min(minNum, a[i]);
    }
    cout<<sum-(maxNum+minNum)<<endl;
  }
}
