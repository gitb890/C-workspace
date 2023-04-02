#include <iostream>
using namespace std;

int main(){
    cout<<"输入一个度： ";
    int degree;
    cin >> degree;
    cout<<"输入一个分： ";
    int minutes;
    cin >> minutes;
    cout<<"输入一个秒： ";
    int seconds;
    cin >> seconds;
    const int min_tran = 60;
    const int sec_tran = 60;
    const double degrees = (double)(minutes/min_tran)+((double)(seconds/sec_tran)/min_tran);
    double ans = (double)degree+degrees;
    cout<<""<<degree<<"degrees, "<<minutes<<" minutes, "<<seconds<<" seconds ="<<ans<<" degrees."<<endl;

    return 0;
}