#include<bits/stdc++.h>

using namespace std;

class Point{
    private:
        float x;
        float y;
    public:
        Point(float _x=0,float _y=0){
            x=_x;
            y=_y;
        }

        Point(Point &p){
            x=p.getx();
            y=p.gety();
        }

        float getx(){
            return x;
        }


        float gety(){
            return y;
        }
};


class Rectangle{
    private:
        Point p1;
        Point p2;
        float S;
    public:
        Rectangle(Point _p1,Point _p2):p1(_p1),p2(_p2){
            S=fabs(p1.getx()-p2.getx())*fabs(p1.gety()-p2.gety());
        }

        float get_S(){
            return S;
        }


};

int main(){
    Point a(-1,-1);
    Point b(1,1);
    Rectangle rectangle(a,b);
    cout<< rectangle.get_S();
    return 0;
}