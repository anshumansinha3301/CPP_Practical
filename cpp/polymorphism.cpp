#include <iostream>
using namespace std;

// Compile-time polymorphism: Function overloading
class CompileTime {
public:
    void display(int x) {
        cout << "Integer: " << x << endl;
    }
    void display(double x) {
        cout << "Double: " << x << endl;
    }
};

// Runtime polymorphism: Virtual functions
class Base {
public:
    virtual void show() {
        cout << "Base class show() function" << endl;
    }
    virtual ~Base() {} // Virtual destructor for cleanup
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show() function" << endl;
    }
};

int main() {
    // Demonstrate compile-time polymorphism
    CompileTime ct;
    ct.display(10);      // Calls display(int)
    ct.display(10.5);    // Calls display(double)

    // Demonstrate runtime polymorphism
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();         // Calls Derived class's show() function

    return 0;
}
