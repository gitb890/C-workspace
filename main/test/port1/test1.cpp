#include <iostream>
using namespace std;

int main(){

    string name;
    string addr;

    cout << "输入名字： "<<name;
    cin >> name;
    cout << "输入地址： "<<addr;
    cin >> addr;
    cout << "welcome!from "<<addr<<","<<name<<endl;

    return 0;
}