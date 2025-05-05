#include <bits/stdc++.h>
using namespace std;

int main() {
	double r, o, c;
  cin>>r>>o>>c;
  double remPerOver = (r+1 - c)/(20 - o);
  // cout<<remPerOver<<endl;
  if(remPerOver <= 36)
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }
}
