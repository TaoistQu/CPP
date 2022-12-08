//
// Created by ql on 2022/12/8.
//

#include "Sheep.h"
#include <iostream>

using namespace std;
int Sheep::cnt = 0;
Sheep::Sheep() {
    cout << "Sheep::Sheep()" << endl;
    cnt++;
}

Sheep::~Sheep() {
    cout << "Sheep::~Sheep()" << endl;
    cnt --;
}
