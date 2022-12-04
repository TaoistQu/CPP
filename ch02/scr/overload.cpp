//
// Created by ql on 22-12-4.
//
#include "overload.h"
#include <iostream>

using namespace std;
void func(){
    cout << "func() " << endl;
}

void func(int a ){
    cout << "a = " << a << endl;
}

void func(float a){
    cout << "a=" << a << endl;
}
void func(char c){
    cout << c << endl;
}