#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long int n, k, start = 1, end = 0, i , j, dig = 0, even = 0, odd = 0;;
    for(int x = 0; x < t; x++){
        cin>>n>>k;
        end = n;
        start = n - k + 1;
        dig = end - start + 1;
        if(start % 2 != 0){
            even = dig / 2;
            odd = dig - even;
        }else{
            odd = dig / 2;
            even = dig - odd;
        }
        if(odd % 2 == 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}