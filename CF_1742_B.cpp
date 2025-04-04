#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, a[100], flag = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
      cin>>a[i];
      for(int j = 0; j < i; j++){
        if(a[j] == a[i]){
          flag = 1;
        }
      }
    }
    if(flag == 0){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
  return 0;
}