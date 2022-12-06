//
// Created by ql on 2022/12/6.
//
#include "new_delete.h"
#include <iostream>

using namespace std;
void test(){
    //在堆空间上申请一个int 类型大小的空间(4Byte)，并将申请的堆空间的内容初始化为10
    int *p = new int(10);
    cout << *p << endl;
    //在堆空间上申请4个int 类型大小的空间(4*sizeof(int) == 16Byte)，4为数组长度
    int *p2 = new int [4];
    for (int i = 0;i < 4;i++){
        cout<< *(p2+i) << endl;
    }

    delete p;
    delete [] p2;
}