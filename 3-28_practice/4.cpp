#include<iostream>

using namespace std;

static int b=0;
static int n2=0;

int fibonac(int a,int b,int n);

int main(){
    int a,result;
    cin>>a;
    result = fibonac(1,1,a);
    cout<<result;
    return 0;
}


int fibonac(int a,int b,int n)  
{  
    n2++;  
    if(n > 2)  
    {  
        return fibonac(a+b,a,n-1);
    }
    return a;  
}  