#include<bits/stdc++.h>

using namespace std;

int main(){
    char ch;
    ofstream file("test1.txt",ios::app);
    file<<"已成功添加字符!";
    file.close();
    ifstream ifile("test1.txt");
    while(ifile.get(ch)){
        cout<<ch;
    }
    cout<<endl;
    ifile.close();
    system("pause");
    return 0;
}