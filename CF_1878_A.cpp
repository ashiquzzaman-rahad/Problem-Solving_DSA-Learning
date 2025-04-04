#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, a[100], k, flag = 0;
    cin>>n>>k;
    for(int i = 0; i < n; i++){
      cin>>a[i];
      if(a[i] == k){
        flag = 1;
      }
    }
    if(flag == 1){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
  }
  return 0;
}