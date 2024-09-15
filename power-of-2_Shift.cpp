#include <bits/stdc++.h>
using namespace std;

bool isEven(int num){
    return num % 2 == 0? true : false;
}

int main(){
    int num;
    cin>>num;

    while (num > 1){
        if(!isEven(num)){
            cout<<"False"<<endl;
            return 0;
        }
        num = num >> 1;
    }

    cout<<"True"<<endl;

    return 0;
}