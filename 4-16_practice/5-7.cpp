#include<bits/stdc++.h>

using namespace std;

class Cat{
    public:
        Cat(){
            numOfCats++;
        }

        static int getnumOfCats(){
            cout<<numOfCats<<endl;
            return 0;
        }
    private:
        static int numOfCats;
};  

int Cat::numOfCats=0;

int main(){
    Cat a;
    Cat::getnumOfCats();
    Cat b;
    Cat::getnumOfCats();
    return 0;
}