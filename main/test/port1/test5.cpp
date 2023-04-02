#include <iostream>
using namespace std;
double tranwendu(double);

int main(){

    cout << "输入温度：";
    double wendu;
    cin >> wendu;
    double huashi;
    huashi = tranwendu(wendu);
    cout << "华氏摄氏度为:"<<huashi<<endl;
    return 0;
}

double tranwendu(double wendu){
    double huashi;
    huashi = wendu*1.8+32.0;
    return huashi;
}