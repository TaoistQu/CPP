#include <iostream>
#include <cstring>
#include "Box.h"
#include "Teacher.h"
#include "CAnimal.h"
#include "new_delete.h"

using namespace std;


int main() {

    Box b;
    b.set_len(10);
    b.set_w(10);
    //cout << b.get_s() << endl;

    Teacher t,t1;
    Teacher t2(1,2,3);
    CAnimal cat(1,2);
    //cout << cat.get_age() << endl;
    test();


    return 0;
}
