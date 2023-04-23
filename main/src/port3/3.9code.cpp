#include <iostream>
using namespace std;

struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;

    //按位运算使用
    //bool goodIn : 1;
};


int main(){
    inflatable guest[2] = {
        {"boa",2.1,32.12},
        {"FJio",3.2,32.11}
    };

    cout << "The guest " << guest[0].name << " and " << guest[1].name << "\nhave a combined volume of "<<guest[0].volume+guest[1].volume << " cubic feet.\n";
    return 0;
}