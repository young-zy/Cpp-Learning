#include<bits/stdc++.h>
#define PI 3.14159265358979323

using namespace std;

class Shape{
    public:
        Shape(){

        }

        virtual float getArea(){
            return 0.0;
        }

        virtual float getPerim(){
            return 0.0;
        }
};

class Rectangle:public Shape{
    private:
        float length;
        float width;
    public:
        Rectangle(float _length,float _width){
            length = _length;
            width = _width;
        }

        Rectangle(){}

        float getArea(){
            return length * width;
        }

        float getPerim(){
            return 2*(length + width);
        }
};

class Circle:public Shape{
    private:
        float radius;
    public:
        Circle(float _radius){
            radius = _radius;
        }
        float getArea(){
            return PI*pow(radius,2);
        }

        float getPerim(){
            return PI*2*radius;
        }
};

int main(){
    Circle circle(2.0);
    Rectangle rectangle(1.0,2.0);
    
    cout<<circle.getArea()<<endl;
    cout<<rectangle.getArea()<<endl;
    cout<<circle.getPerim()<<endl;
    cout<<rectangle.getPerim()<<endl;
    return 0;
}