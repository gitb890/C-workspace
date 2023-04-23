#include <iostream>
using namespace std;

int main(){
    int updates = 6;
    int *p_updates;//定义一个int指针
    p_updates = &updates;

    cout << "Values: update = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Addresses: &updates = " << &updates;
    cout << ",p_updates = " << p_updates <<endl;

    *p_updates = *p_updates +1;
    cout << "Now updates = " << updates <<endl;
    return 0;
}