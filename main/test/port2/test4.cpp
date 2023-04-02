#include <iostream>
using namespace std;

int main(){

    cout<<"输入秒数： ";
    long seconds;
    cin >> seconds;
    const int trans = 60;
    const int day_tr = 24;
    int convert = seconds/trans;
    int second = seconds%trans;
    int minutes = convert%trans;
    int convert1 = convert/trans;
    int hours = convert1%day_tr;
    int days = convert1/day_tr;
    cout<<""<<days<<" days, "<<hours<<" hours,"<<minutes<<" minutes, "<<second<<" seconds."<<endl;

    return 0;

}