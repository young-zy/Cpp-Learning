#include<bits/stdc++.h>

using namespace std;

class Circle{
    private:
        float radius;
        float S;
    public:
        Circle(int _radius){
            radius=_radius;
            S=pow(radius,2)*3.141592653589793238464264338327950288;
        }

        float getArea(){
            return S;
        }
};


int main(){
    Circle circle(2);
    cout<<circle.getArea();
    return 0;
}
