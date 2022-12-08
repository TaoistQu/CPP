//
// Created by ql on 2022/12/8.
//

#include "Sheep.h"
#include <iostream>

using namespace std;
//定义静态变量
int Sheep::cnt = 0;
Sheep::Sheep() {
    cout << "Sheep::Sheep()" << endl;
    cnt++;
}

Sheep::~Sheep() {
    cout << "Sheep::~Sheep()" << endl;
    cnt --;
}

int Sheep::sheep_num() {
   // cout << age << endl; 静态的成员函数中不能访问非静态的成员变量
    return Sheep::cnt;
}
