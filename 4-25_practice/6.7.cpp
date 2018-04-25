#include<bits/stdc++.h>

using namespace std;

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
        char number[7];
        BirthDate birthday;
        char name[11];
        char id[16];
        char sex[3];

    public:
        People(string _number,string _id,int year,int month,int day,string _sex,string _name){
            birthday.year = year;
            birthday.month = month;
            birthday.day = day;
            strcpy(sex,_sex.c_str());
            strcpy(id,_id.c_str());
            strcpy(number,_number.c_str());
            strcpy(name,_name.c_str());
        }

        ~People(){
            
        }

        inline void printInformation(){
            cout<<"name:"<<name<<endl;
            cout<<"number:"<<number<<endl;
            cout<<"birthday:"<<birthday.year<<"/"<<birthday.month<<"/"<<birthday.day<<endl;
        }
};

int main(){
    People people1("16","016",1970,1,1,"fem","÷");
    people1.printInformation();
    return 0;
}