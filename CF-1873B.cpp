#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n, 0);
        int min = INT_MAX, ans = 1, ind = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i] < min){
                min = a[i];
                ind = i;
            }
        }
        for(int i = 0; i < n; i++){
            if(i == ind){
                a[i] += 1;
            }
            ans *= a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}