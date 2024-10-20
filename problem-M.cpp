#include<iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x >= 'a' && x <= 'z'){
        cout<<"ALPHA"<<"\nIS SMALL"<<endl;
    }else if(x >= 'A' && x <= 'Z'){
        cout<<"ALPHA"<<"\nIS CAPITAL"<<endl;
    }else{
        cout<<"IS DIGIT\n";
    }
    return 0;
}