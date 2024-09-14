#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[5];
    int i, t, misplace = 0;
    cin>>t;
    for(i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            cin>>str[j];
        }
        
        if(str[0] != 'a'){
            misplace++;
        }

        if(str[1] != 'b'){
            misplace++;
        }

        if(str[2] != 'c'){
            misplace++;
        }

        if(misplace > 2){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
        misplace = 0;
    }
}

//time: 11min+