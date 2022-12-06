//
// Created by ql on 2022/12/5.
//

#ifndef CH03_CANIMAL_H
#define CH03_CANIMAL_H


class CAnimal {
private:
    int _sex;
    int age;
    int &p;
    const int sum;
public:
    CAnimal(int sex,int age);
    bool set_sex(int);
    bool set_age(int);

    int get_sex();
    int get_age();
    ~CAnimal();
};


#endif //CH03_CANIMAL_H
