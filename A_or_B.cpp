#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x, y;
    cin>>x>>y;
    int pointsBfirst = 1000 - (y*4) + 500 - ((x+y)*2);
    int pointsAfirst = 500 - (x*2) + 1000 - ((x+y)*4);
    if(pointsBfirst >= pointsAfirst)
    {
      cout<<pointsBfirst<<endl;
    }
    else
    {
      cout<<pointsAfirst<<endl;
    }
  }
}
