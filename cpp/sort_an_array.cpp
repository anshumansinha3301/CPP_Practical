#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class SortArray {
public:
    void sortIntegers(int arr[], int size) {
        sort(arr, arr + size); // Sort the integer array
        cout << "Sorted Integers: ";
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }

    void sortStrings(string arr[], int size) {
        sort(arr, arr + size); // Sort the string array
        cout << "Sorted Strings: ";
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    SortArray sorter;

    int intArr[] = {34, 7, 23, 32, 5, 62};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    sorter.sortIntegers(intArr, intSize);

    string strArr[] = {"banana", "apple", "cherry", "date"};
    int strSize = sizeof(strArr) / sizeof(strArr[0]);
    sorter.sortStrings(strArr, strSize);

    return 0;
}
