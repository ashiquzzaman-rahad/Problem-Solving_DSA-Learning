#include<iostream>
using namespace std;

int main(){
    string s;
    string r = "codeforces";
    int t, i, count = 0;
    cin>>t;
    for(i = 0; i < t; i++){
        cin>>s;
        for(int j = 0; j < 10; j++){
            if(s[j] != r[j]){
                count++;
            }
        }
        cout<<count<<endl;
        count = 0;
    }
    return 0;
}

// time: 6min+