#include <iostream>
#include "include/test.h"

using namespace std;

namespace studentInfo{
    void fun(){
        cout <<"别名"<<endl;
    }

}

int main() {

    MySpace::fun();
    MySpace::f2(100);
    namespace stu = studentInfo;
    stu::fun();
    return 0;
}
