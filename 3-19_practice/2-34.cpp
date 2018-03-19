#include<iostream>
#include<string>

using namespace std;

/*
    在使用string的过程中发现会出现程序无法定位入口 于动态链接库的情况
    原因：电脑安装多个编译器，在运行过程中调用了错误的libc++.dll
    解决方法：将编译器的libc++.dll（位于安装目录bin下）复制至exe文件目录下
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