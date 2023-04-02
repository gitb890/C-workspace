#include <iostream>
using namespace std;
void times(int,int);

int main(){

    cout<<"输入小时：";
    int hour;
    cin>>hour;
    cout<<"输入分钟：";
    int minutes;
    cin>>minutes;
    times(hour,minutes);
    return 0;
}

void times(int hour,int minutes){
    
    cout<<"Time:"<<hour<<":"<<minutes<<endl;
}