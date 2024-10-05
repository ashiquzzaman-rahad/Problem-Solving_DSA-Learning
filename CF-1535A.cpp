#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, s[4];
    cin>>t;
    for(int i = 0; i < t; i++){
        for(int j =0 ; j < 4; j++){
            cin>>s[j];
        }

        if (s[0] > s[2] and s[1] > s[2] and s[0] > s[3] and s[1] > s[3]){
            cout<<"NO\n";
        }else if(s[0] < s[2] and s[1] < s[2] and s[0] < s[3] and s[1] < s[3]){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}