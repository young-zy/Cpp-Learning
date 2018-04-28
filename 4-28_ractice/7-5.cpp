#include<bits/stdc++.h>
#define PI 3.14159265358979323

using namespace std;

class Shape{
    public:
        Shape(){

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
};

class Square:public Rectangle{
    public:
        Square(float _length):Rectangle(_length,_length){}

        Square(float _length,float _width):Rectangle(_length,_width){}
};

int main(){
    Circle circle(2.0);
    Rectangle rectangle(1.0,2.0);
    Square square1(1.0,1.0);
    Square square2(1.0);
    
    cout<<circle.getArea()<<endl;
    cout<<rectangle.getArea()<<endl;
    cout<<square1.getArea()<<endl;
    cout<<square2.getArea()<<endl;
    return 0;
}