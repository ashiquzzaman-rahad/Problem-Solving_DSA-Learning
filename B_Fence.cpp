#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
  cin>>n>>k;
  int h[n];
  for(int i = 0; i < n; i++)
  {
    cin>>h[i];
  }
  int sum = 0, start = 0, end = start+k-1;
  for(int i = start; i <= end; i++)
  {
    sum += h[i];
  }
  int leastSum = sum, ans = 0;
  while(end < n-1)
  {
    end++;
    sum = sum - h[start] + h[end];
    start++;
    if(leastSum > sum)
    {
      leastSum = sum;
      ans = start;
    }
  }
  cout<<ans+1<<endl;
}
