//
// Created by ql on 2022/12/5.
//

#include "CAnimal.h"
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;

CAnimal::CAnimal(int sex, int age):_sex(sex),age(age),p(sex),sum(100){
    cout << get_sex() << endl;
    cout << get_age()<<endl;
    cout << sum << endl;
    cout << p << endl;
    cout << sex << endl;
    name = (char *)malloc(32);
    my = new char [32];
}

CAnimal::~CAnimal() {
    cout << "析构函数" << endl;
    if(name != NULL)
    free(name);
    delete [] my;
}

int CAnimal::get_age() {
    return age;
}
int CAnimal::get_sex() {
    return _sex;
}
