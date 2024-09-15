#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    int t, i = 0;
    string str;
    cin>>t;
    for(i = 0; i < t; i++){
        cin>>str;
        if(str.length() % 2 == 0){
            int first_end = (str.length() / 2) - 1;
            int last_start = (str.length() / 2);
            int last_end = str.length() - 1;

            int start = 0, flag = 0;
            while(start <= first_end){
                if(str[start] != str[last_start]){
                    flag = 1;
                    break;
                }
                start++;
                last_start++;
            }
            if(flag == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            flag = 0;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

//time: 17min+