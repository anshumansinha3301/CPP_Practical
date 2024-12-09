#include <iostream>
using namespace std;

int main() {
    try {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (b == 0) throw "Division by zero is not allowed.";
        cout << "Result: " << a / b << endl;
    } catch (const char *msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}
