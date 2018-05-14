#include<bits/stdc++.h>
using namespace std;

class A
{ 
    int a; 
    protected: 
        int protect; 
    public: 
        A(int x)    {   a=x;   protect=x+5;   cout<<"A"<<endl;  } 
        void show() {   cout<<a<<" @"<<protect<<endl;            } 
 }; 
class B
{ 
    int b; 
    public: 
        B(int x){    b=x;    cout<<"B"<<endl;   } 
        int Getb(){   return b;    } 
}; 

class C:public A
{ 
    int c; 
    B obj_b; 
    public: 
        C(int x,int y,int z); 
        void show();
}; 

C::C(int x,int y,int z):A(x),obj_b(y) 
{
    c=z;
    cout<<"C"<<endl;
} 


void C::show()
{   
    A::show(); 
    cout<<obj_b.Getb()<<","<<c<<endl; 
} 

int main(void)
{ 
   C c1(1,2,5); 
   c1.show();
   return 0; 
}
