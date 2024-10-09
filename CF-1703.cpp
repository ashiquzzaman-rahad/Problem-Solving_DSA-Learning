#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, add = 2, ballon = 0;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(s[j] == s[i]){
                    add = 1;
                    break;
                }
            }
            ballon += add;
            add = 2;
        }
        cout<<ballon<<endl;
        ballon = 0;
    }
    return 0;
}