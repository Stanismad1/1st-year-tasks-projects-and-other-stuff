#include <iostream>

using namespace std;

int indexOf(double array[], int count,
    bool (*pred)(double)) // указател към ф-я,
    // която приема double стойност и
    // връща true/false
{
    for (int i = 0; i < count; i++)
        if (pred(array[i]))
            return i;
    return -1;
}
bool isNegative(double value)
{
    return value < 0;
}


int main()
{
    int x = 7, y = 8;

    const int* cp = &x;
    cp = &y;

    
    int* const pc = &x;
    *pc = 21;
  


    int b = 5;

    passByValue(b);
    cout << "Pass by value: " << b << endl;

    passByAddress(&b);
    cout << "Pass by address: " << b << endl; 

    passByReference(b);
    cout << "Pass by reference: " << b << endl;


    const int COUNT = 5;
    double array[] = { 1.5, 0, 2.7, 1024, -3.5 };

    cout << sizeof(array) << endl; 
    printArray(array, COUNT);
    
 
    printArray(array, 3); 
    printArray(array + 2, 3); 
    printArray(array + 1, 3); 

   
    sort(array, COUNT);
    printArray(array, COUNT);

  

    const double* firstPositiveElement = findFirstPositive(array, COUNT);
    if (firstPositiveElement != NULL)
        cout << *firstPositiveElement << endl;


    void (*fp)(int); 
    fp = passByValue;
    fp(5); 

    int indexOfFirstNegative = indexOf(array, 5, isNegative);
    cout << indexOfFirstNegative << endl;

    return 0;
}