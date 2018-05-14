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
        }




        People(){}
        People(People & people){
            birthday.year = people.birthday.year;
            birthday.month = people.birthday.month;
            birthday.day = people.birthday.day;
            sex = people.sex;
            id = people.id;
            number = people.number;
            name = people.name;
        }
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

        Teacher(Teacher & teacher):People(teacher){
            principalship = teacher.principalship;
            department = teacher.department;
        }

        Teacher(People &people, string _principal, string _department):People(people){
            principalship = _principal;
            department = _department;
        }

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
        Student(Student & student):People(student){
            classNO = student.classNO;
        }

        Student(People &people,string _classNO):People(people){
            classNO = _classNO;
        }

        Student(){}

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
        Graduate(){}
        Graduate(string _number,string _id,int year,int month,int day,string _sex,string _name,string _classNO,string _subject,Teacher *_advisor):
        Student(_number,_id,year,month,day,_sex,_name,_classNO),
        People(_number,_id,year,month,day,_sex,_name)
        {
            subject = _subject;
            advisor = _advisor;
        }

        Graduate(Graduate & graduate):
        Student(graduate),
        People(graduate)
        {
            subject = graduate.subject;
            advisor = graduate.advisor;
        }

        Graduate(Student & student,string _subject,Teacher *_advisor):
        Student(student),
        People(student)
        {
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

        TA(Graduate & graduate,string _principalship, string _department):
        People(graduate),
        Graduate(graduate)
        {
            principalship = _principalship;
            department = _department;
        }

        TA(Teacher & teacher,string _classNO,string _subject,Teacher *_advisor):
        Teacher(teacher),
        People(teacher)
        {
            subject = _subject;
            classNO = classNO;
            advisor = _advisor;
        }

        
        void printInformation(){
            Teacher::printInformation();
        }
};

int main(){
    People people("16","016",1970,1,1,"fem","Peoplename");
    people.printInformation();
    Teacher teacher("25","001",1970,1,1,"fem","Teachername","teacher","Foreign language");
    teacher.printInformation();
    Student student("16","001",1970,1,1,"fem","Studentname","000000001");
    student.printInformation();
    Graduate graduate("16","016",1970,1,1,"fem","Graduatename","000000002","English",&teacher);
    graduate.printInformation();
    TA ta("16","016",1970,1,1,"fem","taname","000000003","English",&teacher,"ta","Foreign language");
    ta.printInformation();

    People people1("16","016",1970,1,1,"fem","People1");
    People people2("16","016",1970,1,1,"fem","People2");
    People people3("16","016",1970,1,1,"fem","People3");
    People people4("16","016",1970,1,1,"fem","People4");
    People people5("16","016",1970,1,1,"fem","People5");
    Teacher teacher1(people1,"principal1","department1");
    
    Student student1(people2,"000000001");
    Graduate graduate1(student1,"subject1",&teacher1);
    TA ta1(graduate1,"principal2","department2");

    teacher1.printInformation();
    graduate1.printInformation();
    ta1.printInformation();



    return 0;
}