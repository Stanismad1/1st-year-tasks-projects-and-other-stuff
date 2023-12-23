#include <iostream>

using namespace std;

void passByValue(int a)
{
    a = 10;
}

void passByAddress(int* a)
{
    *a = 10;
}

void passByReference(int& a)
{
    a = 15;
}


void swap(double& a, double& b)
{
    double c = a;
    a = b;
    b = c;
}

void sort(double* array, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < count; j++)
            if (array[j] < array[minIndex])
                minIndex = j;
        swap(array[i], array[minIndex]);
    }
}

void printArray(const double array[], int count)

    for (int i = 0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
}


const double* findFirstPositive(const double* array, int count)
{
    for (int i = 0; i < count; i++)
        if (array[i] > 0)
            return array + i;
    return NULL;
}