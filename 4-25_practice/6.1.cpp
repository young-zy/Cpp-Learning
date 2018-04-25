#include<bits/stdc++.h>

using namespace std;

void turn(int a[3][3]){
    int temp;
    temp=a[0][1];
    a[0][1]=a[1][0];
    a[1][0]=temp;
    temp=a[0][2];
    a[0][2]= a[2][0];
    a[2][0] = temp;
    temp = a[2][1];
    a[2][1] = a[1][2];
    a[1][2] = temp;
}


int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    turn(a);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}