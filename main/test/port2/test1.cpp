#include <iostream>
using namespace std;

int main(){

    cout << "输入身高:_____\b";
    int hight;
    cin >> hight;
    const int trans=12;
    int ft,in;
    ft = hight / trans;
    in = hight % trans;
    cout << "身高为"<<ft<<"feet,"<<in<<"inches 高"<<endl;
    return 0;
}