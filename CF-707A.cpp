#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, count = 0;
    char x[100][100];
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>x[i][j];
            if(x[i][j] == 'W' || x[i][j] == 'B' || x[i][j] == 'G'){
                count++;
            }
        }
    }
    if(count == (n*m)){
        cout<<"#Black&White"<<endl;
    }else{
        cout<<"#Color"<<endl;
    }
    return 0;
}