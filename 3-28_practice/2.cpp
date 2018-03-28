#include<iostream>

using namespace std;

double Max1(int a, int b){
    double result=0.0;
    double max;
    if(a>b){
        result = a;
    }else{
        result = b;
    }
    return result;
}

double Max1(int a,int b,int c){
    double result=0.0;
    if(a>b){
        if(a>c){
            result = a;
        }else{
            result = c;
        }
    }else{
        if(b>c){
            result = b;
        }else{
            result = c;
        }
        
    }
    return result;
}

double Max1(double a,double b){
    double result=0.0;
    if(a>b){
        result = a;
    }else{
        result = b;
    }
    return result;
}

double Max1(double a,double b,double c){
    double result=0.0;
    if(a>b){
        if(a>c){
            result = a;
        }else{
            result = c;
        }
    }else{
        if(b>c){
            result = b;
        }else{
            result = c;
        }
    }
    return result;
}


int main(){

    return 0;
}