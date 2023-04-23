#include <iostream>
using namespace std;

int main(){
    // 声明指向特定类型的指针
    double * p1;
    char * p2;

    // 给指针赋值
    double * p3;
    double * p4;
    char * p5;
    double bubble = 3.2;
    p3 = &bubble;
    p5 = new char;
    p4 = new double[30];
    cout << "p3="<<p3<<"\n"<<"p5="<<p5<<"\n"<<"p4="<<sizeof(p4)<<endl;

    // 对指针解除引用,意味着获取指针指向的值
    cout << *p3;
    *p5 = 'S';

    // 区分指针和指针所指向的值,如果p6是指向int的指针，*p6则不是指向int的指针，等同于一个int类型的变量，p6才是指针
    int * p6 = new int;
    *p6 = 5;

    // 数组名,一般情况下将数组名视为数组的第一个元素的地址
    int taco[10];

    // 指针算术，允许将指针和整数相加，加1的结果等于原来的地址值加上指向的对象占用的总字节数，将一个指针减去另一个指针，获得两个指针的差，这里将得到一个整数，仅当两个指针指向同一个数组时（也可以指向超过结尾的一个位置），这种运算才有意义；得到两个元素的间隔
    int p7[10] = {1,4,2,4,2,4,2,7,5,10};
    int * p8 = p7;
    p8 = p8+1;
    int *p9 = &p7[9];
    p9 = p9-1;
    int diff = p9-p8;

    cout<<"diff="<<diff<<endl;

    // 数组的动态联编和静态联编，使用数组声明来创建数组，采用静态联编；使用new[]
    // 来创建数组采用动态联编，在运行时为数组分配空间，长度也是在运行时设置，完成后将使用delete[]释放其占用的内存
    int p10[10];

    int size;
    cin>>size;
    int *p11 = new int [size];
    cout << "*p11="<<*p11<<endl;

    delete [] p11;

    // 数组表示法和指针表示法,使用[]数组表示法等同于对指针解除引用
    int *p12 = new int [10];
    *p12 = 5;
    p12[0] = 6;
    p12[9] = 42;
    int cot[10];
    *(cot+4) = 12;

}