#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
private:
    int numA;

public:
    A(int value) : numA(value) {}

    // Friend function declaration
    friend void swapValues(A &a, B &b);

    void display() const {
        cout << "Value in class A: " << numA << endl;
    }
};

class B {
private:
    int numB;

public:
    B(int value) : numB(value) {}

    // Friend function declaration
    friend void swapValues(A &a, B &b);

    void display() const {
        cout << "Value in class B: " << numB << endl;
    }
};

// Friend function definition
void swapValues(A &a, B &b) {
    int temp = a.numA;
    a.numA = b.numB;
    b.numB = temp;
}

int main() {
    A objA(10);
    B objB(20);

    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();

    swapValues(objA, objB);

    cout << "\nAfter swapping:" << endl;
    objA.display();
    objB.display();


    return 0;
}
