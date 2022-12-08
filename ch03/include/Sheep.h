//
// Created by ql on 2022/12/8.
//

#ifndef CH03_SHEEP_H
#define CH03_SHEEP_H


class Sheep {
public:
    char name[32];
    int age;
    //这里只是声明，还需要定义
    static int cnt ;
    static int sheep_num();
    Sheep();
    ~Sheep();
};


#endif //CH03_SHEEP_H
