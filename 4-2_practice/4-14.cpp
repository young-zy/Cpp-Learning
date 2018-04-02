#include<bits/stdc++.h>

using namespace std;

class Tree{
    private:
        int ages;
    public:
        Tree(int _ages){
            ages=_ages;
        }

        void grow(int exceed){
            ages+=exceed;
        }

        int age(){
            return ages;
        }
};



int main(){
    Tree tree(10);
    tree.grow(15);
    cout<<tree.age();
    return 0;
}