#include <iostream>
using namespace std;
//zad1
int main()
#include <iostream>
using namespace std;
void printSquares(int start, int end) {
    for (int i = start; i <= end; i++)
        cout << i * i << " ";
    cout << endl;

}
int main()
{
    int a, b;
    cin >> a >> b;
    printSquares(a, b);



}

//zad2
#include <iostream>
using namespace std;
void swapgucntions(int a, int b) {

    {
        int a, b, temp;
        cin >> a >> b >> temp;
        temp = a;
        a = b;
        temp = b;
    }

    //zad3 

    bool isPrime(int number) {
        if (number < 2) return false;
        for (int i = 2; i * i <= number; i++)
            if (number % i == 0) return false;
        return true; // ???? else!
    }
    int findFirstPrime(int n) {
        int current = n;
        while (!isPrime(current))
            current++;
        return current;
    }
    int main()
    {
        int n;
        cin >> n;
    }

#include <iostream>
    using namespace std;
    //zad 4
    int Min(int number1, int number2) {
        switch (number1, number2)
        {
        case1:
            number1 < number2;
            cout << number2;
            break;
        case2:
            number1 > number2;
            cout << number2;
            break;
        default: cout << "The numbers are equal" << endl;
        }

    }
    int main()
    {
        int number1, number2;
        cin >> number1 >> number2;
        cout << Min(number1, number2) <<


            //zad5 
            int ????_????????(int ?????, int ?????) {
            int ???? = 0;

            while (????? > 0) {
                if (????? % 10 == ?????) {
                    ????++;
                }
                ????? /= 10;
            }

            return ????;
        }

        int main() {
            int N, C;


            std::cout << "???????? ?????????? ????? N (1000 ?? 999999999): ";
            std::cin >> N;


            if (N < 1000 || N > 999999999) {
                std::cout << "????????? ?????. ????, ???????? ????? ? ????????? [1000..999999999]." << std::endl;
                return 1; // ??? ?? ??????
            }


            std::cout << "???????? ????? C: ";
            std::cin >> C;


            if (C < 0 || C > 9) {
                std::cout << "????????? ?????. ????, ???????? ????? ????? 0 ? 9." << std::endl;
                return 1; // ??? ?? ??????
            }

            int ???? = ????_????????(N, C);

            std::cout << "??????? " << C << " ?? ????? " << ???? << " ???? ? ??????? " << N << "." << std::endl;

            return 0;
        }
