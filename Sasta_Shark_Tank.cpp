#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while (t--)
  {
    long long int a, b;
    cin>>a>>b;
    if(a*10 > b * 5){
      cout<<"FIRST\n";
    }
    else if(a*10 < b*5)
    {
      cout<<"SECOND\n";
    }
    else
    {
      cout<<"ANY\n";
    }
  }
}
