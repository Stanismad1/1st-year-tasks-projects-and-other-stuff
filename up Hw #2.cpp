
//zad1
#include <iostream>
using namespace std;
int THelongestsequence(int start, int end) {
 int maxlenght = 0;
  int startinglength = 1;
  int maxlengthfirst = start;

    for (int i = start; i < end; ++i) {
    int diff = i - start;
 int current = i;

 for (int j = i + 1; j <= end; ++j)

 {
      
     if (current + diff == j)    
            
            
            {
         current = j;
  
       ++startinglength; }
     }

  if (startinglength > maxlength) {
      maxlength = startinglength;
            maxlenghtstart = i;
   }

  startinglength = 1;
    }
    return maxlenghtstart;
}
int main() {
    int start, end;
  cin >> start;
   cin >> end;

    int result = findLongestArithmeticSequence(start, end);
    cout  << result << std::endl;

    return 0;
}


#include <iostream>

bool canReachEnd(int arr[], int size) {
    int lastReachable = 0;

    for (int i = 0; i < size; ++i) {
        if (i > lastReachable) {
            return false;
        }

        lastReachable = std::max(lastReachable, i + arr[i]);

        if (lastReachable >= size - 1) {
            return true;
        }
    }

    return false;
}
//zad2
int main() {
            int size;
         cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {  cin >> arr[i];
                }
  if (canReachEnd(arr, size)) {
       cout << "will reach"<< endl;
    }
  else {
       cout << "wiil reach" << endl;
    }
    return 0;
}
 //zad3
    int n;
 cin >> n;
    if (n < 1 || n > 100) {
    return 1;
    }
   for (int i = 0; i <= n; ++i) {
 for (int j = 0; j < n - i; ++j) {
      cout << " ";
        }


 for (int k = 0; k < 2 * i + 1; ++k) {
     cout << "*";
        }
  cout << endl;;
    }
    return 0;
}