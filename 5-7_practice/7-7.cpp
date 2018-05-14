#include<bits/stdc++.h>

using namespace std;

class Base{
    public: 
        Base(){
            cout<<"Base constructor was called"<<endl;
        }
};

class Derived:public Base{
    public:
        Derived():Base(){
            cout<<"Derived constructor was called"<<endl;
        }
};

//i'm writing in your project

int main(){
    return 0;
}