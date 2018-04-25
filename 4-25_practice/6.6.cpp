#include<bits/stdc++.h>

using namespace std;

class Employee{
    private:
        string name;
        string address;
        string city;
        string postcode;
    public:
        void changeName(string _name){
            name = _name;
        }
        void display(){
            cout<<name<<endl;
            cout<<address<<endl;
            cout<<city<<endl;
            cout<<postcode<<endl;
        }
        Employee(string _name,string _address,string _city,string _postcode){
            name= _name;
            address = _address;
            city = _city;
            postcode = _postcode;
        }
};


int main(){
    Employee *e1[5];
    for(int i=0;i<5;i++){
        e1[i] = new Employee("a","b","c","d");
        e1[i]->display();
        cout<<endl;
    }
    return 0;
}