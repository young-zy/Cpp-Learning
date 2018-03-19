#include<iostream>

using namespace std;

int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=i;j<=9;j++){
            cout<< i << 'x' << j << '=' << i*j << '\t' ;
        }
        cout<<endl;
    }
    return 0;
}