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
            cout<<"太大了"<<endl;
        }else if(target>input){
            cout<<"太小了"<<endl;
        }else{
            break;
        }
        cin>>input;
    }
    cout<<"恭喜你，答对了"<<endl;
    return 0;
}