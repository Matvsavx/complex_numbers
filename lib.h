//
// Created by User on 18.01.2020.
//
#include <iostream>
#ifndef COMPLEX_NUMBERS_LIB_
#define COMPLEX_NUMBERS_LIB_H

using namespace std;

struct complex_number
{
    int a2 = 0;
    int b2 = 0;

};

complex_number operator+(complex_number a1, complex_number b1);
complex_number operator-(complex_number a1, complex_number b1);
complex_number operator/(complex_number a1, complex_number b1);
complex_number operator*(complex_number a1, complex_number b1);

std::ostream &operator<<(std::ostream &out, complex_number a1);



#endif //COMPLEX_NUMBERS_LIB_H
