#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout <<"输入英寸: ";
    double feet;
    cin >> feet;
    cout <<"输入英尺：";
    double inch;
    cin>>inch;
    cout << "输入体重磅：";
    double bang;
    cin>>bang;
    const double hei_trans = 12.0;
    const double mi_trans = 0.0254;
    const double bang_trans = 2.2;
    double hei = ((feet*hei_trans)+inch)*mi_trans;
    double zhong = bang/bang_trans;
    double BMI = zhong/pow(hei,2);
    cout<<"BMI:"<<BMI<<endl;
}