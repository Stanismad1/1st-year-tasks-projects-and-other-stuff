#include <iostream>
using namespace std;
//zad1
int countDigits(const char* str, int count = 0) {
    if (*str == '\0') {
   return count;
 }
 if (*str >= '0' && *str <= '9') {
        return countDigits(str + 1, count + 1);
    }
else 
    
    {
        return countDigits(str + 1, count);
    
}

int main() {
   const char* str = "5ducksflew10kilometersin8hours";
    cout << "the numnber of string is:" << " " << countDigits() << endl;

    //zad2
    void Tocounttimes(int* numbers, int size, int K) {
        if (size <= 1 || K % size == 0) {
    return;
        }
  K == K % size;

   if (K < 0) {
  K += size;
                 }
   for (int i = 0; i < K; ++i) {

  int lastNumber = numbers[size - 1];

  for (int j = size - 1; j > 0; --j) {
                numbers[j] = numbers[j - 1];
            }

            numbers[0] = lastNumber;
        }
        int numbers[] = { 5, 3, 7, 4, 6 };
        int size_of_numbers = sizeof(numbers) / sizeof(numbers[0]);
        int K_shift = 3;

        Tocounttimes(numbers, size_of_numbers, K_shift);

        printf("After cyclic shift: ");
        for (int i = 0; i < size_of_numbers; ++i) {
            printf("%d ", numbers[i]);
        }
        printf("\n");
        //zad3



    void Cyclesofrthematrix(int matrix[3][3]) {

 for (int i = 2; i >= 0; --i) {
          
 for (int j = 0; j < 3; ++j) {
   cout << matrix[i], [j] << endl;
          
     }


 for (int i = 0; i < 3; ++i) {
          cout << matrix[i], [j] << endl;
      }
  for (int j = 2; j >= 0; --j)
      }
   cout << matrix[i], [j] << endl;
   }

 for (int i = 2; i >= 0; --i) {

   for (int j = 2; j >= 0; --j) {


                cout << matrix[i], [j] << endl;
            }
        }
           
for (int i = 0; i < 3; ++i) {
 for (int j = 0; j < 3; ++j) {
    cout << matrix[i], [j] << endl;
     }
            int main() {
                matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
                Cyclesofrthematrix(matrix);
            }
            return 0;
        }
    }