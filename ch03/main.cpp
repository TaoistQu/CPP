#include <iostream>
#include <cstring>
#include "Box.h"
#include "Teacher.h"
#include "CAnimal.h"
#include "new_delete.h"
#include "MyD.h"
#include "Test.h"

using namespace std;


int main() {
/*
    Box b;
    b.set_len(10);
    b.set_w(10);
    //cout << b.get_s() << endl;

    Teacher t,t1;
    Teacher t2(1,2,3);
    CAnimal cat(1,2);
    //cout << cat.get_age() << endl;
    test();
    MyD myD;

    */


    Test test1(10,20);
    test1.sum[0] = 100;
    test1.sum[1] = 101;
    test1.sum[2] = 102;
    test1.sum[3] = 103;

    Test test2 =test1;
    //test2 = test1;
   cout<< test2.sum[0] << endl;
//    cout << &test2 << endl;
//    cout << &test1 << endl;
//
   cout << "test2.x: " << test2.x << endl;
//    cout << "test2.y: " << test2.y << endl;
//    cout << "test2.sum: " << test2.sum << endl;
//    cout << "test1.sum: " << test1.sum << endl;


    return 0;
}
