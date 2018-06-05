#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        A():count(1){}
        virtual ~A(){}
        virtual A* Copy() const = 0;
        virtual void Out() const = 0;
    protected:
        int count;
    
    
};
class B:public A{
    public:

        ~B(){
            --count;
            Out();
        }
        virtual A* Copy() const {
            B *p = new B(*this);
            ++p ->count;
            return p;
        }
        virtual void Out(){
            cout<<count<<endl;
        }
    
    
};



int main() {
    // B b;
    // A *a1=&b;
    // a1= a1 ->Copy();
    // a1 -> Out();
    // delete a1;
    // return 0;
}