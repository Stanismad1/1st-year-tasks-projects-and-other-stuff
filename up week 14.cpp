#include <iostream>

using namespace std;

// zad1:
void task1() {
    int a, b;
    double c, d;

    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Address of c: " << &c << endl;
    cout << "Address of d: " << &d << endl;
}

// zad 2:
void task2() {
    int a = 10;
    int* p = &a;
    *p += 5;
    cout << "New value of a: " << a << endl;
}

// zad 3:
void task3(int arr[], int size) {
    cout << "Using indexed variable:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Using pointer (array name):" << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    cout << "Using pointer (auxiliary variable):" << endl;
    int* p = arr;
    for (int i = 0; i < size; ++i) {
        cout << *p << " ";
        p++;
    }
    cout << endl;
}

// zad 4:
void task4(int* arr, int size) {
    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; --i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    if (evenCount > oddCount)
        cout << "1 if even elements are more" << endl;
    else if (oddCount > evenCount)
        cout << "2 if odd elements are more" << endl;
    else
        cout << "0 if even and odd elements are equal" << endl;
}




