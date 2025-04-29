#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t--)
  {
    int x;
    cin>>x;
    int coins10 = x / 10; 
    int temp = x;
    temp -= 10*coins10;
    // cout<<coins10<<endl;
    int coins5 = temp / 5; 
    // cout<<coins10*10 + coins5*5<<endl;
    if((coins10*10 + coins5*5) == x)
    {
      cout<<coins10+coins5<<endl;
    }
    else
    {
      cout<<-1<<endl;
    }
  }

}
