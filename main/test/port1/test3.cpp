#include <iostream>
using namespace std;
void first_print();
void sec_print();

int main(){

    first_print();
    first_print();
    sec_print();
    sec_print();
    return 0;
}

void first_print(){
    cout << "Three blind mice" <<endl;
}

void sec_print(){
    cout << "See how they run" <<endl;
}