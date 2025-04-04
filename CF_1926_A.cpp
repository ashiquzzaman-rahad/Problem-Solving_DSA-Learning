#include<bits/stdc++.h>
using namespace std;

int main(){
  int t, i = 0;
  cin>>t;
  for(i = 0; i < t; i++){
    char a[5];
    int numA = 0;
    for(int j = 0; j < 5; j++){
      cin>>a[j];
      if (a[j]=='A')
      {
        numA++;
      } 
    }
    if(numA > 2){
      cout<<"A\n";
    }
    else{
      cout<<"B\n";
    }
  }
  return 0;
}