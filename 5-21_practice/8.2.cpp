#include<bits/stdc++.h>

using namespace std;

class Vehicle{
    public:
        virtual void run(){
            cout<<"Vehicle is running"<<endl;
        }

        virtual void stop(){
            cout<<"Vehicle is now stopped"<<endl;
        }
};

class Bicycle:public Vehicle{
    public:
        virtual void run(){
            cout<<"Bicycle is running"<<endl;
        }

        virtual void stop(){
            cout<<"Bicycle is now stopped"<<endl;
        }
};

class Motorcar: public Vehicle{
    public:
        virtual void run(){
            cout<<"Motorcar is running"<<endl;
        }

        virtual void stop(){
            cout<<"Motorcar is now stopped"<<endl;
        }
};

class Motorcycle: public Bicycle, public Motorcar{
    public:
        virtual void run(){
            cout<<"Motorcycle is running"<<endl;
        }

        virtual void stop(){
            cout<<"Motorcycle is now stopped"<<endl;
        }
};



int main(){
    Vehicle vehicle;
    Bicycle bicycle;
    Motorcar motorcar;
    Motorcycle motorcycle;
    vehicle.run();
    bicycle.run();
    motorcar.run();
    motorcycle.run();
    vehicle.stop();
    bicycle.stop();
    motorcar.stop();
    motorcycle.stop();
    return 0;
}