#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n, m, x, earn = 0;
    vector<int> a;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < m; i++){
        if(a[i] <= 0){
            earn -= a[i];
        }else{
            break;
        }
    }
    cout<<earn<<endl;
    return 0;
}