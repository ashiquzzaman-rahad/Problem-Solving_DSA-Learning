#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int a, b, x, y;
    cin>>a>>b>>x>>y;
    double chef = double(a)/x;
    double chefina = double(b)/y;
    if(chef > chefina)
    {
      cout<<"Chefina"<<endl;
    }
    else if(chef < chefina)
    {
      cout<<"Chef"<<endl;
    }
    else
    {
      cout<<"Both"<<endl;
    }
  }

}
