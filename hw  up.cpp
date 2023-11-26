

//HW UP
//zad2

#include <iostream>

using namespace std;

void Swapnumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void Combinations(int digits[], int originalnumber, int size, int number) {
 if (originalnumber == size - 1) {
     int newNumber = 0;
     for (int i = 0; i < size; ++i)
   {
 newNumber = newNumber * 10 + digits[i];
   }
   if (newNumber != number)
   {  cout << newNumber << endl;}
   }
  else {
   for (int i = originalnumber; i < size; ++i) {
 Swapnumbers(digits[originalnumber], digits[i]);

 Combinations(digits, originalnumber + 1, size, number);
    
 Swapnumbers(digits[originalnumber], digits[i]); 
    }
   }
}

void generateCompositeNumbers(int number) {
    int size = 0;
    int temp = number;
    while   (temp > 0) {
     temp  /= 10;
    size++;
    }
    int * digits = new int[size];
    for (int i = size - 1; i >= 0; --i) {
   digits[i] = number % 10;
  number /= 10;
    }

    Combinations(digits, 0, size, number);
    delete[] digits;
}

int main() 
{
  int number ;
   cin >> number;
 generateCompositeNumbers(number);
  return 0;
}

//zad3

const unsigned DIGITS_COUNT = 4;

unsigned digitsCount(unsigned number)
{
    if (number == 0) { return 1; }

    unsigned counter = 0;

    while (number != 0)
    {
   ++counter; 
   number /= 10;  }
    return counter;
}

bool containsDigit(unsigned number, unsigned digit)
{
    if (number == 0) { return (digit == 0); }

    while (number != 0)
    {
        if (number % 10 == digit) { return true; }
        number /= 10;
    }
    return false;
}

bool containsDigit(unsigned number, unsigned digit, int& pos)
{
    if
        (number == 0)
    {
pos = (digit == 0) ? 0 : -1;
return (digit == 0);
    } int posCounter = 0;
    while (number != 0)
    {
        if (number % 10 == digit)
        {
            pos = posCounter;
            return true;
        }
        number /= 10;
        ++posCounter;
    }
    pos = -1;
    return false;
}
bool hasDuplicates(unsigned number)
{
    while (number != 0)
    {
        unsigned lastDigit = number % 10;
        number /= 10;
        if (containsDigit(number, lastDigit)) { return true; }
    }

    return false;
}
bool validNumber(unsigned number)
{
    return digitsCount(number) == DIGITS_COUNT && !hasDuplicates(number);
}
unsigned getInput()
{
 unsigned input = 0;
   bool validNumberEntered;

 do
    {
     cout << "Enter number: ";
     cin >> input;
   validNumberEntered = validNumber(input);

 if (!validNumberEntered)
        {
            cout << "Invalid Number" << endl;
        }
    } while (!validNumberEntered);

    return input;
}

void countBullsAndCows(unsigned& bulls, unsigned& cows, unsigned unknownnumber, unsigned guess)
{
    bulls = cows = 0;
    unsigned posCounter = 0;
    int pos = 0;
    while (guess)
    {
        unsigned lastDigit = guess % 10;
        bool contain = containsDigit(unknownnumber, lastDigit, pos);

        if (contain)
        {
     if (pos == posCounter)
       {
     ++bulls;
      }
      else
      {
    ++cows;
     }
    }
     ++posCounter;
     guess /= 10;
    }
}

int main()
{
    cout << "enter unknown number" << endl;
    unsigned secret = getInput();
    cout << "Beggin to count" << endl;

    bool wonTheGame = false;
    unsigned bulls = 0;
    unsigned cows = 0;

    do
    {
        unsigned guess = getInput();
        countBullsAndCows(bulls, cows, secret, guess);
        wonTheGame = (bulls == 4);
        cout << "Bulls: " << bulls << " Cows: " << cows << endl;
    } while (!wonTheGame);
    cout << "You are correct !" << endl;
}
