#include <iostream>
using namespace std;

int main(){
    int higgens = 5;
    int * pt = &higgens;
    // int * pn = new int;
    //使用new来声明指针,内存位置的准确值随系统而异
    //new分配的内存块通常与常规变量声明分配的内存块不同

    int  * posem = new int [10];

    cout <<"posem内存地址="<< posem[2] <<endl;

    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens <<endl;

    cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;
    return 0;
}