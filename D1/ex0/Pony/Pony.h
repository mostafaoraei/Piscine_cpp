//
// Created by Mostafa Oraei on 10/13/20.
//

#ifndef PONY_PONY_H
#define PONY_PONY_H


class Pony {
private:
    int height;
    int age = 9;
    int color;
public:
    Pony();
    int getAge();
    void setAge(int age);
};


#endif //PONY_PONY_H
