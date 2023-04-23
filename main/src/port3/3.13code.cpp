#include <iostream>
using namespace std;

int main(){
    double * p3 = new double [3];
    //这里将指针p3当作数组名来使用
    p3[0] = 0.2;
    p3[1] = 0.3;
    p3[2] = 0.4;

    cout << "p3[1] 内存地址= "<<p3[1]<<".\n";
    p3 = p3+1;
    // 不能修改数组名的值，但指针是变量，可以修改它的值。
    cout << "现在p3[0]的内存地址="<<p3[0]<<" 和 ";
    cout << "p3[1]的内存地址="<<p3[1]<<".\n";
    p3 = p3-1;
    delete [] p3;
    //delete清除指针，在动态数组中使用delete []
    // p3+1的效果，表达式p[0]现在指的是数组的第二个值，将p3+1导致它指向第2个元素而不是第一个，减去1后指针指向原来的值（可以查看3.14code），因此可以给delete[]提供正确的路径地址
    return 0;
}