#include <iostream>
#include "teacher.h"
#include "default_value.h"
#include "overload.h"
using namespace std;

#define Max(a,b) (a)>(b) ? (a):(b)
#define ADD(x,y) x+y

inline int test(int a,int b){
    return a+b;
}

inline int testInline(int x,int y){
    return x+y;
}

void test01(){
    int a =10;
    int &b = a;
    cout <<"a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "------------" << endl;

    b =100;
    cout <<"a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "------------" << endl;

    int &c = a;
    c = 200;
    cout <<"a:" << a << endl;
    cout << "b:" << b << endl;
    cout<<"c:" << c << endl;
    cout << "------------" << endl;
    cout <<"&a :" << &a<<endl;
    cout << "&b :" << &b<<endl;
    cout << "&c :" << &c <<endl;
}

int main() {
    //test01();
   //引用所占的内存空间大小
   float ch ='a';
   float & p =ch;
   cout << sizeof(p) << endl;
   Teacher teacher;
   teacher.age =20;
   printfT2(teacher);
   printfT1(&teacher);
   cout << teacher.age << endl;
    int ret = Max(10,20);
    cout << ret << endl;
    cout << ADD(12,23) *10 << endl; // cout << 12 +23*10 << endl
    cout << test(12,34) *10 << endl;
    cout << testInline(10,20) << endl;
    cout<< test_default(2) <<endl;
    func();
    func(3);
    func(3.14f);
    func('a');
   return 0;
}
