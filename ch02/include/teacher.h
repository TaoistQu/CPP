//
// Created by ql on 2022/12/1.
//

#ifndef CH02_TEACHER_H
#define CH02_TEACHER_H

#endif //CH02_TEACHER_H
typedef struct Teacher{
    char name[32];
    int age;
}Teacher;

void printfT2(Teacher &t);
void printfT1(Teacher* const t);