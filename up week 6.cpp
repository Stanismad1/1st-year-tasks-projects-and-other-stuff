#include <iostream>
using namespace std;
//zad0
cout << "Do you want to continue? Y/N";
cin >> c;
if (c == 'y' || c == 'Y')
cout << "Let's go!" << endl;

	if (c >= 'a' && c <= 'z')
		cout << "Small letter";

c = 'A'; c += 3; cout << c; 
#include <iostream>
#include <cstring>

//zad1

using namespace std;


char toLowerCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}

char toUpperCase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}


int findDigitalRoot(int number)
{
    int result = number % 9;
    if (result == 0) result = 9; 
    return result;
}