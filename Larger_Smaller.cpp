#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n], min = INT32_MAX, max = 0;
    for(int i = 0; i < n; i++)
    {
      cin>>a[i];
      if(max < a[i])
      {
        max = a[i];
      }
      if(min > a[i])
      {
        min = a[i];
      }
    }
    if(max != min)
    {
      cout<<max-min-1<<endl;
    }
    else
    {
      cout<<0<<endl;
    }
  }

}
