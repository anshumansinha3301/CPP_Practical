#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int numA;
public:
    A(int value) : numA(value) {}
    friend int findLargest(A, B);
};

class B {
    int numB;
public:
    B(int value) : numB(value) {}
    friend int findLargest(A, B);
};

int findLargest(A objA, B objB) {
    return (objA.numA > objB.numB) ? objA.numA : objB.numB;
}

int main() {
    A objA(25);
    B objB(30);

    cout << "Largest number is: " << findLargest(objA, objB) << endl;
    return 0;
}
