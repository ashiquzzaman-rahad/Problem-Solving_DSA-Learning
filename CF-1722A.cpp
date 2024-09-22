#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    string s, a = "Timur";

    for(int x = 0; x < t; x++){
        cin>>n>>s;
        sort(s.begin(), s.end());
        sort(a.begin(), a.end());
        // cout<<s<<" "<<a;
        if(s == a){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}