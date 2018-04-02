#include<bits/stdc++.h>

using namespace std;

class Dog{
    private:
        int age;
        int weight;
    public:

        int get_Age(){
            return age;
        }

        int get_Weight(){
            return weight;
        } 
    
        Dog(int _age,int _weight){
            age=_age;
            weight=_weight;
        }
};


int main(){
    Dog dog = Dog(1,9);
    cout<<dog.get_Weight();
    cout<<dog.get_Age();
    return 0;
}