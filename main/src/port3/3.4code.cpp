#include <iostream>
using namespace std;

int main(){
    cout << "你今年多大\n";
    int year;
    cin >> year;
    cout << "你住在哪里?\n";
    char address[80];
    cin.getline(address,80);
    //getline()看到换行符会认为是空行，并将一个空字符串赋给address数组
    //(cin >> year).get();
    cout << "年龄："<<year<<endl;
    cout << "地址：" << address << endl;
    cout << "Done\n";
    return 0;
}