//
// Created by ql on 2022/12/5.
//

#include "CAnimal.h"
#include <iostream>

using namespace std;

CAnimal::CAnimal(int sex, int age):_sex(sex),age(age),p(sex),sum(100){
    cout << get_sex() << endl;
    cout << get_age()<<endl;
    cout << sum << endl;
    cout << p << endl;
    cout << sex << endl;
}

CAnimal::~CAnimal() {
    cout << "析构函数" << endl;
}

int CAnimal::get_age() {
    return age;
}
int CAnimal::get_sex() {
    return _sex;
}
