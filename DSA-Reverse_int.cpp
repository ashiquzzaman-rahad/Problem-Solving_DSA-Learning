#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int digCount(int num){
    int count = 0;
    while(num > 0){
        num /= 10;
        count++;
    }
    return count;
}

int main(){
    int num = 0, revNum = 0;
    cin>>num;

    int count = digCount(num) - 1;

    while(num > 0){
        revNum += (num % 10) * pow(10, count);
        num /= 10;
        count--;
    }

    cout<<revNum<<endl;
    return 0;
}