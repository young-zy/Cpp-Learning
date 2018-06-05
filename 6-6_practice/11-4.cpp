#include<bits/stdc++.h>

using namespace std;

int main(){
    char ch;
    string message;
    ifstream file;
    file.open("test1.txt");
    while(file.get(ch)){
        cout<<ch;
    }
    file.close();
    cout<<endl;
    system("pause");
    return 0;
}