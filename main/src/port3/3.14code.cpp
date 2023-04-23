#include <iostream>
using namespace std;

int main(){
    double wages[3] = {1000.1,123.2,100.3};
    short stacks[3] = {3,2,1};

    double * pw = wages;
    short * ps = &stacks[0];

    cout << "pw="<<pw<<",*pw="<<*pw<<endl;
    pw = pw+1;
    // 将指针变量+1后，其增加的值等于指向的类型占用的字节数
    cout << "pw指针+1：\n";
    cout << "pw="<<pw<<",*pw="<<*pw<<"\n\n";
    cout << "ps="<<ps<<",*ps="<<*ps<<endl;
    ps = ps+1;
    cout << "ps指针+1：\n";
    cout << "ps="<<ps<<",*ps="<<*ps<<"\n\n";

    cout << "使用数组表示法访问两个元素\n";
    // c++执行转换：arrayname[i] becomes * (arrayname+i)
    cout << "stacks[0] = "<<stacks[0]<<",stacks[1]="<<stacks[1]<<endl;
    cout << "使用指针表示法访问两个元素\n";
    // pointername[i] becomes * (pointername+i)
    cout << "*stacks="<<*stacks<<",*(stacks+1)"<<*(stacks+1)<<endl;
    
    cout <<sizeof(wages)<<"=wages数组的长度\n";
    cout <<sizeof(pw)<<"=pw指针的长度\n";
    return 0;
}