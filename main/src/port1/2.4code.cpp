#include <iostream>
void simon(int);

int main(){
    using namespace std;

    // simon(3);
    cout << "输入一个数: ";
    int count;
    cin >> count;
    simon(count*3);
    cout << "result ok" <<endl;
    return 0;
}

void simon(int n){
    using namespace std;

    cout << "调用方法："<<n<<"次."<<endl;
}