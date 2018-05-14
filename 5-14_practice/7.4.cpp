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
    protected:
        string number;
        BirthDate birthday;
        string name;
        string id;
        string sex;

    public:
        People(string _number,string _id,int year,int month,int day,string _sex,string _name){
            birthday.year = year;
            birthday.month = month;
            birthday.day = day;
            sex = _sex;
            id = _id;
            number = _number;
            name = _name;
 //           cout<<"people constructor"<<endl;
        }
        People(){}
        ~People(){
            
        }

        inline void printInformation(){
            cout<<"name:"<<name<<endl;
            cout<<"number:"<<number<<endl;
            cout<<"birthday:"<<birthday.year<<"/"<<birthday.month<<"/"<<birthday.day<<endl;
        }

        string getName(){
            return name;
        }
};

class Teacher:virtual public People{
    protected:
        string principalship;
        string department;
    public:
        Teacher(string _number,string _id,int year,int month,int day,string _sex,string _name,string _principal,string _department):
        People(_number,_id,year,month,day,_sex,_name)
        {
            principalship = _principal;
            department = _department;
        }
        Teacher(){}
        void printInformation(){
            People::printInformation();
            cout<<"principalship:"<<principalship<<endl;
            cout<<"department:"<<department<<endl<<endl;
        }
        string getName(){
            return People::getName();
        }
};

class Student:virtual public People{
    protected:
        string classNO;
    public:
        Student(string _number,string _id,int year,int month,int day,string _sex,string _name,string _classNO):
        People(_number,_id,year,month,day,_sex,_name)
        {
            classNO = _classNO;
        }
        void printInformation(){
            People::printInformation();
            cout<<"classNO"<<classNO<<endl<<endl;
        }
};

class Graduate:public Student{
    protected:
        string subject;
        Teacher *advisor;
    public:
        Graduate(string _number,string _id,int year,int month,int day,string _sex,string _name,string _classNO,string _subject,Teacher *_advisor):
        Student(_number,_id,year,month,day,_sex,_name,_classNO),
        People(_number,_id,year,month,day,_sex,_name)
        {
            People(_number,_id,year,month,day,_sex,_name);
            subject = _subject;
            advisor = _advisor;
        }
        void printInformation(){
            Student::printInformation();
            cout<<"subject:"<<subject<<endl;
            cout<<"advisor:"<<advisor->getName()<<endl<<endl;
        }
};

class TA: public Graduate,public Teacher{
    public:
        TA(string _number,string _id,int year,int month,int day,string _sex,string _name,string _classNO,string _subject,Teacher *_advisor,string _principal,string _department):
            Graduate(_number,_id,year,month,day,_sex,_name,_classNO,_subject,_advisor),
            Teacher(_number,_id,year,month,day,_sex,_name,_principal,_department),
            People(_number,_id,year,month,day,_sex,_name)
        {
            
        }
        
        void printInformation(){
            Teacher::printInformation();
        }
};

int main(){
    People people1("16","016",1970,1,1,"fem","Peoplename");
    people1.printInformation();
    Teacher teacher("25","001",1970,1,1,"fem","Teachername","teacher","Foreign language");
    teacher.printInformation();
    Student student("16","001",1970,1,1,"fem","Studentname","000000001");
    student.printInformation();
    Graduate graduate("16","016",1970,1,1,"fem","Graduatename","000000002","English",&teacher);
    graduate.printInformation();
    TA ta("16","016",1970,1,1,"fem","taname","000000003","English",&teacher,"ta","Foreign language");
    ta.printInformation();
    return 0;
}