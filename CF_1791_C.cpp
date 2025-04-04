#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    char a[2000];
    cin>>n;
    for(int j = 0; j < n; j++){
      cin>>a[j];
    }
    
    int start = 0, end = n-1;
    for(int j = 0; j < n; j++){
      if((a[start] != a[end]) && (end > start)){
        start++;
        end--;
      }
      else
      {
        // cout<<end<<" "<<start<<endl;
        cout<<end-start+1<<endl;
        break;
      }
    }
  }
  return 0;
}