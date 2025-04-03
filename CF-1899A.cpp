#include<bits/stdc++.h>
using namespace std;

int main(){
  int t, n, i = 0;
  cin>>t;
  for(i = 0; i < t; i++){
    cin>>n;
    if(n % 3 == 0){
      cout<<"Second\n";
    }else{
      cout<<"First\n";
    }
  }
  return 0;
}