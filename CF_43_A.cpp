#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, num1 = 0, num2 = 0;
  cin>>n;
  string a[n];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }
  string firstTeam = a[0], secondTeam;
  for(int i = 0; i < n; i++){
    if(a[i] == firstTeam){
      num1++;
    }
    else{
      secondTeam = a[i];
      num2++;
    }
  }

  if(num1 > num2){
    cout<<firstTeam<<endl;
  }
  else if(num2 > num1){
    cout<<secondTeam<<endl;
  }
  return 0;
}