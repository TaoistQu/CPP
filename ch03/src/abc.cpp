//
// Created by ql on 2022/12/7.
//

#include "abc.h"
#include <iostream>

using namespace std;

ABC::ABC(int a, int b, int c):a(a),b(b),c(c) {
    cout << "ABC(int a, int b, int c)" << endl;
}

ABC::~ABC() {
    cout << "ABC::~ABC()" << endl;
}