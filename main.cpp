#include <iostream>
#include "lib.h"

using namespace std;

int main() {

    complex_number a1 {11,1};
    complex_number b1 {7,11};

    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 / b1 << endl;
    cout << a1 * b1 << endl;
    return 0;
}
