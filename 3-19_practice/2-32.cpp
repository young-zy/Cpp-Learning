#include<iostream>
#include<ctime>

using namespace std;

int main(){
    int target,input,a;
    srand((unsigned int)time(NULL));
    target=rand()%100+1;
    input = 0;
    cin>>input;
    while(input!=target){
        if(target<input){
            cout<<"̫����"<<endl;
        }else if(target>input){
            cout<<"̫С��"<<endl;
        }else{
            break;
        }
        cin>>input;
    }
    cout<<"��ϲ�㣬�����"<<endl;
    return 0;
}