#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a[3], max = 0;
    for(int i = 0; i < 3; i++)
    {
      cin>>a[i];
      if(a[i] > max)
      {
        max = a[i];
      }
    }
    cout<<max<<endl;
  }

}
