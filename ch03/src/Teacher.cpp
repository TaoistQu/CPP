//
// Created by ql on 2022/12/5.
//

#include "Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher() {
    cout << "Teacher()" << endl;
}

Teacher::Teacher(int len,int w,int h) {
    _len = len;
    _w = w;
    _h = h;
    cout << "Teacher(int len,int w,int h)"<<endl;
}
