#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, c1, c2;
    long int n, n_3, total;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        n_3 = n / 3;
        c1 = n_3;
        c2 = n_3;
        total = n_3 * 3;
        if(n - total == 1){
            c1++;
        }else if(n - total == 2){
            c2++;
        }
        cout<<c1<<" "<<c2<<endl;
    }

    return 0;
}

// time: 11 min+