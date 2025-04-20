#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 0, revNum = 0, power = 1;
    cin>>num;

    while(num > 0){
        revNum *= 10;
        revNum += (num % 10);
        num /= 10;
    }

    cout<<revNum<<endl;
    return 0;
}