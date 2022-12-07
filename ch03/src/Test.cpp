//
// Created by ql on 2022/12/7.
//

#include "Test.h"
#include <iostream>
#include <string.h>

using namespace std;

Test::Test() {
    cout << "Test()" << endl;
    x = 0;
    y = 0;
    sum = new int [4];
}

Test::Test(int a, int b):x(a),y(b) {
    cout << "Test(int a, int b):x(a),y(b)" << endl;
    sum = new int[4];
}
/**
 * 拷贝构造函数
 * @param t
 */
Test::Test(const Test &t) {

    cout << "Test(const Test &t)" << endl;
    x = t.x;
    y = t.y;
    sum = new int[4];
    memcpy(sum,t.sum,4*sizeof(int));
    /*
    for (int i =0 ; i < 4;i++){
        sum[i] = t.sum[i];
    }
     */
}

Test::~Test() {
    cout<< "Test::~Test()" << endl;
    if(sum != NULL){
        delete[] sum;
    }
}


