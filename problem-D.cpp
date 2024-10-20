#include<iostream>
using namespace std;
int main(){
    long long int a, b, c, d, ans1, ans2, ans3, ans4, ans5, ans6;
    cin>>a>>b>>c>>d;
    ans1 = a + b * c;
    ans2 = a + b - c;
    ans3 = a * b + c;
    ans4 = a * b - c;
    ans5 = a - b + c;
    ans6 = a - b * c;
    if (ans1 == d || ans2 == d || ans3 == d || ans4 == d || ans5 == d || ans6 == d){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}