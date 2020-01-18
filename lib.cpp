#include <iostream>
#include <math.h>
#include "lib.h"
using namespace std;

complex_number operator+(complex_number a1, complex_number b1)
{
    complex_number ans = a1;
    ans.a2 += a1.a2;
    ans.b2 += b1.b2;
    return ans;
}
complex_number operator-(complex_number a1, complex_number b1)
{
complex_number ans = a1;
ans.a2 -= a1.a2;
ans.b2 -= b1.b2;
return ans;
}
complex_number operator/(complex_number a1, complex_number b1)
{
    complex_number ans;

    ans.a2 = ((a1.a2 * b1.a2) + (a1.b2 * b1.b2)) / ((float) pow(a1.b2, 2) + (float) pow(b1.b2, 2));
    ans.b2 = ((a1.b2 * b1.a2) - (a1.a2 * b1.b2)) / ((float) pow(a1.b2, 2) + (float) pow(b1.b2, 2));

    return ans;
}

complex_number operator*(complex_number a1, complex_number b1)
{
    complex_number ans;
    ans.a2 = ((a1.a2 * b1.a2) - (a1.b2 * b1.b2));
    ans.b2 = (a1.a2 * b1.b2 + b1.a2 * a1.b2);
    return ans;
}

ostream &operator<<(ostream &out, complex_number a1) {

    out << "Действительная:" << a1.a2;
    out << ' ';
    out << "Мнимая:" << a1.b2;

    return out;
}
