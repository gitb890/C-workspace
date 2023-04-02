#include <iostream>
using namespace std;

int main(){
    //都用的KM输入
    cout<<"输入里程： ";
    double km;
    cin>>km;
    cout<<"输入油耗： ";
    double L;
    cin>>L;
    float count = ((float)L/(float)km)*100;
    float Am_count = (float)km/(float)L;
    cout<<"百公里油耗为："<<count<<endl;
    cout<<"美国油耗计算："<<Am_count<<endl;

    return 0;
}