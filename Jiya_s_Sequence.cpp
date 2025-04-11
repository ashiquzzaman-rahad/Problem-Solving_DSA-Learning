#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin>>t;
  while (t--)
  {
    cin>>n;
    long long num, mulResult = 1;
    for(int i = 0; i < n; i++){
      cin>>num;
      mulResult *= num;
    }
    int lsd = mulResult % 10;
    // cout<<lsd<<endl;
    if(lsd == 2 || lsd == 3 || lsd == 5)
    {
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
    mulResult = 1;
  }
  
  return 0;
}