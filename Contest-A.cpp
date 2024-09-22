#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, take = 0, give = 0;
    int a[100];
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n>>k;
        for(int j = 0; j < n; j++){
            cin>>a[j];
        }
        for(int j = 0; j < n; j++){
            if(a[j] >= k){
                take += a[j];
            }else if(a[j] == 0 && take > 0){
                take--;
                give++;
            }
        }
        cout<<give<<endl;
        give = 0;
        take = 0;
    }
    return 0;
}