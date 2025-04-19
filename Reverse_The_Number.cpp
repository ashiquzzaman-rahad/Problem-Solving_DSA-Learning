#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while (t--)
  {
    string n;
    cin>>n;
    long long num = 0;
    for(int i = n.size()-1; i >= 0; i--)
    {
      num *= 10;
      num += int(n[i] - '0');
    }
    cout<<num<<endl;
  }
  

}
