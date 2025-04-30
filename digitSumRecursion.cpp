#include<bits/stdc++.h>
using namespace std;

int digitSumRec(int n)
{
  if(n == 0) return 0;
  return (n%10) + digitSumRec(n/10);
}

int main()
{
  int n;
  cin>>n;
  cout<<digitSumRec(n)<<endl;
}