#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c < 'z'){
        c += 1;
    }
    else{
        c = 'a';
    }
    cout<<c<<endl;
    return 0;
}