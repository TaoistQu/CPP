#include <iostream>
#include <cstring>

using namespace std;
class CAnimal{
public:
    char name[32];
    int age;

    void jiao(const char *voice){
        cout << name <<": "<< voice <<endl;
    }
};

class Teacher{
public:
    char name[32];
private:
    int _age;
    char _sex;

    void play(){
        cout<< name << "在玩" << endl;
    }

};
int main() {
    CAnimal cat;
    CAnimal cats[10];

    CAnimal *p ;
    p = &cat;

    p->age = 10;
    p->jiao("喵喵");
    memset(cat.name,0,sizeof(cat.name));
    strcpy(cat.name,"小花");
    p->jiao("喵喵");
    return 0;
}
