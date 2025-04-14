#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[n], evenNum = 0;
  for(int i = 0; i < n; i++){
    cin>>a[i];
    if(a[i] % 2 == 0)
    {
      evenNum++;
    }
  }
  if(double(evenNum) > double(n/2))
  {
    cout<<"READY FOR BATTLE\n";
  }
  else
  {
    cout<<"NOT READY\n";
  }
}
