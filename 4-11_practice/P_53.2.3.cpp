#include<bits/stdc++.h>


using namespace std;

enum Sex{Male,Female};

class BirthDate{
    public:
        int year=0;
        int month=0;
        int day=0;

        BirthDate(int _year=0,int _month=0,int _day=0){
            year = _year;
            month = _month;
            day = _day;
        }
};


class People{
    private:
        string number="";
        BirthDate birthday;
        string id="";
        Sex sex;

    public:
        People(string _number,string _id,int year,int month,int day,Sex _sex){
            birthday.year = year;
            birthday.month = month;
            birthday.day = day;
            sex = _sex;
            id = _id;
            number = _number;
        }
        
        // People(People& people){
            
        // }

        ~People();

        inline void printInformation(){
            cout<<"number:"<<number<<endl;
            cout<<"birthday:"<<birthday.year<<"//"<<birthday.month<<"//"<<birthday.day<<endl;
        }
};

int main(){
    People people1("1","1",1999,7,2,Male);
    people1.printInformation();
    return 0;
}