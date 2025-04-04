#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    char a[3];
    for(int i = 0; i < 3; i++){
      cin>>a[i];
    }
    // cout<<int(a[0])-48<<" "<<int(a[2])-48<<endl;
    cout<<int(a[0]) + int(a[2]) - 96<<endl;
  }
  return 0;
}