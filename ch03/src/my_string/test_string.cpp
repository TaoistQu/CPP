//
// Created by ql on 22-12-11.
//

#include "test_string.h"
#include <iostream>


using namespace std;

void test_string(){
    string s1;
    cout << s1 << endl;
    cout<< s1.size() << endl; //字符串的长度
    cout << s1.length() << endl; //字符串的长度

    string s2("hello"); //使用字符串常量构造string对象
    cout << s2 << endl;

    const char *p = "world";
    string s3(p);
    cout << s3 << endl;

    string s4(4,'K');
    cout << s4 << endl;

    string s5("12345",1,3);
    cout << s5 << endl;



}



