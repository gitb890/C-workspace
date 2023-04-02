#include <iostream>
using namespace std;

int main(){

    cout<<"输入世界人口： ";
    long long world;
    cin >> world;
    cout<<"输入中国人口： ";
    long long cn;
    cin >> cn;
    float per = (float)cn/(float)world*100;
    cout<<"中国人口占世界人口的"<<per<<"%"<<endl;

    return 0;
}