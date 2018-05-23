#include<bits/stdc++.h>

using namespace std;

class Mammal{
    protected:
        int age;
    public:
        Mammal(int _age){
            cout<<"Mammal constructor was called"<<endl;
            age = _age;
        }
        ~Mammal(){
            cout<<"Mammal deconstructor was called"<<endl;
        }

        virtual speak(){
            cout<<"I am mammal!"<<endl;
        }
};

class Dog:public Mammal{
    protected:
        string name;
    public:
        Dog(string _Dogname,int _Dogage):Mammal(_Dogage){
            cout<<"Dog constructor was called"<<endl;
            name = _Dogname;
        }

        ~Dog(){
            cout<<"Dog deconstructor was called"<<endl;
        }

        speak(){
            cout<<"I am dog!"<<endl;
        }
};


int main(){
    Dog *Dog0 = new Dog("simple dog",1);
    Dog0 -> speak();
    
    delete Dog0;
    return 0;
}