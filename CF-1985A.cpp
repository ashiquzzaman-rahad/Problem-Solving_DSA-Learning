#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i;
    string a, b;
    cin>>t;

    for(i = 0; i < t; i++){
        cin>>a>>b;
        char f_a = a[0];
        a[0] = b[0];
        b[0] = f_a;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}

// time = 5min+