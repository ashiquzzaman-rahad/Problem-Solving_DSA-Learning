#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int t, n, val, count1 = 0, count2 = 0;
    cin>>t;
    for(int x = 0; x < t; x++){
        cin>>n;

        for(int i = 0; i < n; i++){
            cin>>val;
            a.push_back(val);
        }

        for(int i: a){
            if(i == 1){
                count1++;
            }else{
                count2++;
            }
        }

        if(count1 % 2 != 0){
            cout<<"NO\n";
        }else{
            if(count2 == 1){
                cout<<"Yes\n";
            }else if(count2 != 1 && count2 % 2 != 0){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }

        count1 = 0;
        count2 = 0;
    }
    return 0;
}