#include <iostream>
using namespace std;
double tran(double);

int main(){

    cout << "输入光年：";
    double year;
    cin >> year;
    int LightYear;
    LightYear = tran(year);
    cout << "等于"<<LightYear<<"天文单位";
    return 0;

}

double tran(double year){
    int LightYear;
    LightYear = 63240*year;
    return LightYear;
}