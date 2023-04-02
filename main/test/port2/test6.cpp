#include <iostream>
using namespace std;

int main(){
    cout<<"输入里程： ";
    double km;
    cin>>km;
    cout<<"输入油耗： ";
    double L;
    cin>>L;
    float count = ((float)L/(float)km)*100;
    cout<<"百公里油耗为："<<count<<endl;

    return 0;

}