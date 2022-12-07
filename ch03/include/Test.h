//
// Created by ql on 2022/12/7.
//

#ifndef CH03_TEST_H
#define CH03_TEST_H


class Test {
public:
    int *sum;
    int x;
    int y;
    Test();
    Test(int a,int b);
    Test(const Test &t);
    ~Test();
};


#endif //CH03_TEST_H
