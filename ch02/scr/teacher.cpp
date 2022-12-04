//
// Created by ql on 2022/12/1.
//
#include <iostream>
#include "teacher.h"

using namespace std;
/**
 * 作用相当于函数的形参为一个常指针
 * @param t
 */
void printfT2(Teacher &t){
    cout << t.age <<endl;
    t.age =32;
}
void printfT1(Teacher* const t){
    cout << t -> age <<endl;
    t->age = 33;
}