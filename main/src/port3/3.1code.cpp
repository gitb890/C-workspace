#include <iostream>
using namespace std;

int main(){
    int yam[3];
    yam[0] = 4;
    yam[1] = 5;
    yam[2] = 6;

    int yamcount[3] = {32,42,35};//也可以省略=

    cout<<"Total yam= ";
    cout<<yam[0]+yam[1]+yam[2]<<endl;
    cout<<"The package with"<<yam[1]<<"yams costs";
    cout<<yamcount[1]<<" cents per yam.\n";
    int total = yam[0]*yamcount[0]+yam[1]*yamcount[1];
    total = total+yam[2]*yamcount[2];
    cout<<"The total yam expense is"<<total<<" cents.\n";

    cout << "\nSize of yams array = "<<sizeof yam;
    // sizeof返回类型或数据对象的长度（byte）
    cout << " bytes. \n";
    cout << "Size of one element = "<<sizeof yam[0];
    cout << "bytes. \n";
    return 0;

}