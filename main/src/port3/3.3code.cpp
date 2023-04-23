#include <iostream>
using namespace std;

int main(){
    // const int ArSize = 20;
    // char name[ArSize];
    // char dessert[ArSize];

    // cout << "输入你的名字: ";
    // cin >> name;
    // cout << "输入你喜欢的甜点： ";
    // cin >> dessert;
    // cout << "我有一些甜点"<<dessert;
    // cout << "给你"<<name<<".\n";

    // const int ArSize = 20;
    // char name[ArSize];
    // char dessert[ArSize];

    // cout << "输入你的名字: \n";
    // cin.getline(name,ArSize);
    // //getline()和get()都是读取行输入，直到换行符，getline会抛弃换行符，get会保留换行符在输入序列；
    // cout << "输入你喜欢的甜点： ";
    // cin.getline(dessert,ArSize);
    // cout << "我有一些甜点"<<dessert;
    // cout << "给你"<<name<<".\n";

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "输入你的名字: ";
    cin.get(name,ArSize).get();
    //这里第二个get()是做一个拼接作用
    cout << "输入你喜欢的甜点： ";
    cin.get(dessert,ArSize).get();
    cout << "我有一些甜点"<<dessert;
    cout << "给你"<<name<<".\n";
    
    return 0;
}