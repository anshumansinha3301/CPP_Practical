#include <iostream>
using namespace std;

class Base {
public:
    void hybridFunction() {
        cout << "Base hybridFunction called." << endl;
    }
};

class Derived1 : virtual public Base {
    // Inherits hybridFunction from Base
};

class Derived2 : virtual public Base {
    // Inherits hybridFunction from Base
};

class FinalHybrid : public Derived1, public Derived2 {
    // Ambiguity arises: which hybridFunction to use?
};

int main() {
    FinalHybrid obj;
    obj.hybridFunction(); // Error: ambiguous call
    return 0;
}
