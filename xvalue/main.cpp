#include <iostream>

struct A{

    int i;
    A(): i(5) {}

};


A f(){return A(); }
A F(){return std::move(A()); }

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    f() = A();

    A && a1 = f(); // prvalue

    A && a2 = F(); // xvalue

    a1.i = 1;
    a2.i = 2; // небезпечно

    cout << a1.i << "  " << a2.i << endl;

    return 0;
}
