#include<bits/stdc++.h>

using namespace std;

class OBJ{
    private:
        int weight;
    
    public:
        OBJ(int _weight){
            weight=_weight;
        }

        friend int getTotalWeight(OBJ &obj1,OBJ &obj2){
            return obj1.weight+obj2.weight;
        } 
};

class Boat:public OBJ{
    public:
        Boat(int _weight):OBJ(_weight){};
};

class Car:public OBJ{
    public:
        Car(int _weight):OBJ(_weight){};
};


int main(){
    Boat b(10);
    Car c(20);
    cout<<getTotalWeight(b,c);
    return 0;
}
