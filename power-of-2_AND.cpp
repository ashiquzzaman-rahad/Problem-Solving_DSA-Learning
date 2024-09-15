#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    if(!(num & (num - 1)) && (num != 0)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}