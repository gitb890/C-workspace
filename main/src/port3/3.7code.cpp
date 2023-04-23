#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    char charr[20];
    string str;

    cout << "输入前的charr 的长度: "<<strlen(charr) <<endl;
    cout << "输入后的charr 的长度："<<str.size() <<endl;
    cout << "输入一个text： \n";
    cin.getline(charr,20);
    cout << "输入的是："<<charr<<endl;
    cout << "再输入一个text：\n";
    getline(cin,str);
    cout << "第二次输入："<<str<<endl;
    cout << "charr输入的长度："<<strlen(charr) << endl;
    cout << "str输入的长度："<<str.size()<<endl;

    return 0;
}