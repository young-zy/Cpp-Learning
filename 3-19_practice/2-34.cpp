#include<iostream>
#include<string>

using namespace std;

/*
    ��ʹ��string�Ĺ����з��ֻ���ֳ����޷���λ��� �ڶ�̬���ӿ�����
    ԭ�򣺵��԰�װ����������������й����е����˴����libc++.dll
    �������������������libc++.dll��λ�ڰ�װĿ¼bin�£�������exe�ļ�Ŀ¼��
*/
int main(){
    string str[5]={"red","yellow","blue","white","balck"};
    int i,j,k,l;
    l=1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            for(k=0;k<5;k++){
                if(i!=j&&i!=k&&j!=k){
                    cout<<l++<<".\t"<<str[i]<<'\t'<<str[j]<<'\t'<<str[k]<<endl;
                }
            }
        }
    }
    return 0;
}