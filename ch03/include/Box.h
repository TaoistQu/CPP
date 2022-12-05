//
// Created by ql on 2022/12/5.
//

#ifndef CH03_BOX_H
#define CH03_BOX_H

#endif //CH03_BOX_H

class Box {
    //属性
private:
    int _len;
    int _w;
    int _h;
    int _s;
    int _v;

public:
    bool set_len(int len);
    bool set_w(int w);
    bool set_h(int h);

    int get_len();
    int get_w();
    int get_h();

    int get_s();
    int get_v();
};
