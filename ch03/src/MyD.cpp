//
// Created by ql on 2022/12/7.
//

#include "MyD.h"
#include <iostream>

using namespace std;
MyD ::MyD(): abc1(1,2,3), abc2(4,5,6) {
    cout << "MyD ::MyD()" << endl;
}
MyD::~MyD() {
    cout << "MyD::~MyD()" << endl;
}
