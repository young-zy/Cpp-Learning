#include<bits/stdc++.h>

using namespace std;


class Point{
    protected:
        float x;
        float y;
    public:
        Point(float _x , float _y){
            x = _x;
            y = _y;
        }

        // Point opreator + (const Point p){
        //     return Point(x+p.x,y+p.y);
        // }

        friend Point operator + (const Point &point1,const Point & point2){
            return Point(point1.x + point2.x, point1.y + point2.y);
        }

        friend ostream & operator << (ostream &out, const Point &p){
            out<<"("<<p.x<<","<<p.y<<")";
            return out;
        }
};

int main(){
    Point p1(1,2);
    Point p2(0.1,0.2);
    p1 = p1 + p2;
    cout<<p1<<endl;
    return 0;
}