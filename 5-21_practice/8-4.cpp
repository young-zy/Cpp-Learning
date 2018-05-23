#include<bits/stdc++.h>

using namespace std;

class Counter{
    public:
        Counter(int _count){
            count = _count;
        }

        ~Counter(){}

        int count;

        Counter operator + (const Counter &counter2){
            return Counter(count += counter2.count);
        }
};

int main(){
    Counter counter1(5);
    Counter counter2(3);
    counter1 = counter1 + counter2;
    cout<<counter1.count<<endl;
    return 0;
}