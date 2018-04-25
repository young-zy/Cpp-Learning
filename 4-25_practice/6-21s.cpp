#include<bits/stdc++.h>

using namespace std;

int count(string _str){
    int len = _str.length();
    int cou = 0;
    for(int i = 0;i < len;i++){
        if(_str[i]>='a'&& _str[i]<='z'||_str[i]>='A'&&_str[i]<='Z'){
            cou++;
        }
    }
    return cou;
}

int main(){
    string str;
    char a[100];
    cin.getline(a,100);
    str = a;
    cout<<str<<endl;
    cout<<count(str);
    return 0;
}