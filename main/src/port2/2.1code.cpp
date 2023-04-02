#include <iostream>
using namespace std;

int main(){
    int auks,bats,coots;

    auks = 19.99+11.99;
    bats = (int) 19.99+(int) 11.99;//强制转换
    coots = int (19.99)+int (11.99);//强制转换
    cout<<"auks="<<auks<<",bats="<<bats;
    cout<<",coots="<<coots<<endl;

    char ch = 'z';
    cout <<"这个单词来自"<<ch<<":";
    cout <<int(ch)<<endl;
    cout <<"是的，这个单词是";
    cout <<static_cast<int>(ch)<<endl;//强制类型转换函数static_cast
    return 0;
}