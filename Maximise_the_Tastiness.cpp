#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int testiness[4] = {a+c, a+d, b+c, b+d}, max = 0;
    for(int i = 0; i < 4; i++)
    {
      if(testiness[i] > max)
      {
        max = testiness[i];
      }
    }
    cout<<max<<endl;
  }

}
