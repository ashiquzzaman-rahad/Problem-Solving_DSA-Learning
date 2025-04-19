#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int d[n], remove = 0;
    for(int i = 0; i < n; i++)
    {
      cin>>d[i];
      if(d[i] >= 1000)
      {
        remove++;
      }
    }
    cout<<remove<<endl;

  }

}
