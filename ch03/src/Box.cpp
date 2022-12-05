//
// Created by ql on 2022/12/5.
//
#include "Box.h"
#include <iostream>

using namespace std;

bool Box::set_len(int len) {
    if(len <= 0|| len >100){
        cout << "len error" << endl;
        return false;
    }
    _len = len;
    return true;
}

bool Box::set_w(int w) {
    if(w <= 0 || w >100){
        cout << "w error " << endl;
        return false;
    }
    _w = w;
    return true;
}
bool Box::set_h(int h) {
    if(h <= 0 || h >100){
        cout<<"h error" << endl;
        return false;
    }
    _h = h;
    return true;
}

int Box::get_len() {
    return _len;
}

int Box::get_h() {
    return _h;
}

int Box::get_w() {
    return _w;
}

int Box::get_s() {
    _s = _len * _w;
    return _s;
}

int Box::get_v() {
    _v = get_s()*_h;
    return _v;
}