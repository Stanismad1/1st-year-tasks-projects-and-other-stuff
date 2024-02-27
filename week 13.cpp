
#include <iostream>


//  0
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

// 1
int recStrlen(const char* str) {
    if (*str == '\0')
        return 0;
    return 1 + recStrlen(str + 1);
}

//  2
int reverse(int n) {
    if (n < 10)
        return n;
    return (n % 10) * pow(10, int(log10(n))) + reverse(n / 10);
}

//  3
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// 4
bool areEqual(char* str1, char* str2) {
    if (*str1 != *str2)
        return false;
    if (*str1 == '\0' || *str2 == '\0')
        return true;
    return areEqual(str1 + 1, str2 + 1);
}

// 5
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 6
int findMin(int arr[], int size) {
    if (size == 1)
        return arr[0];
    int min_rest = findMin(arr + 1, size - 1);
    return (arr[0] < min_rest) ? arr[0] : min_rest;
}

//  7
void decimalToBinary(int n) {
    if (n == 0)
        return;
    decimalToBinary(n / 2);
    std::cout << n % 2;
}

//  8
void evaluate(const char* str) {
    int lower = 0, upper = 0, digits = 0;
    for (; *str != '\0'; ++str) {
        if (islower(*str))
            ++lower;
        else if (isupper(*str))
            ++upper;
        else if (isdigit(*str))
            ++digits;
    }
    std::cout << "???? ????? ?????: " << lower << std::endl;
    std::cout << "???? ?????? ?????: " << upper << std::endl;
    std::cout << "???? ?????: " << digits << std::endl;
}
// 9
void swapcase(char* str) {
    for (; *str != '\0'; ++str) {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
    }
}

int main() {
    
    std::cout << sumOfDigits(154) << std::endl;
    std::cout <<  recStrlen("Happy new year") << std::endl;
    std::cout << " " << reverse(1123) << std::endl;
    std::cout <<  factorial(5) << std::endl;
    char str1[] = "Hello";
    char str2[] = "Hello";
    std::cout <<  areEqual("", "") << std::endl;
    std::cout <<  areEqual("", "Hi") << std::endl;
    std::cout <<  areEqual(str1, str2) << std::endl;
    std::cout <<  areEqual("Hello", "Hi") << std::endl;
    std::cout <<  fibonacci(6) << std::endl;
    int arr[] = { 10, 15, 4, 15, 16 };
    std::cout <<  findMin(arr, 5) << std::endl;
    std::cout << std::endl;
    evaluate("3 Doors Down");
    char str[] = "Yellow Submarine";
    std::cout << "???????? ???: ";
    swapcase(str);
    std::cout << str << std::endl;

    return 0;
}
