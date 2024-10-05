#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        int ans = (n / 10) + (n % 10);
        cout<<ans<<endl;
    }
    return 0;
}