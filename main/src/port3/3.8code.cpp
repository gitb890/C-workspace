#include <iostream>
using namespace std;

//结构体可以同时存储int,long和double等
//共用体union只能存储int,long和double，通常用于操作系统数据结构或硬件数据结构
struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};


int main(){
    inflatable guest = {
        "jioav nioaf",
        1.43,
        29.21
    };

    inflatable f1 = {
        "Aiofa nioin",
        2.14,
        323.12
    };

    cout << "Expand your guest list with" << guest.name;
    cout << " and " << f1.name << "!\n";
    cout << "you can have both for $";
    cout << guest.price+f1.price <<"!\n";

    return 0;

}