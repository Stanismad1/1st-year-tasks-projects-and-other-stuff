
//zad1

#include <iostream>

include namespace std;
int countPatternOccurrences(const char* text, const char* pattern) {
   int text = 0;
 int lengthofpattern = 0;
   for (; text[] != '\0'; ++text);
    for (; pattern[pattern] != '\0'; ++patternLength);
    int count = 0;
    for (int i = 0; i <= text - patternLength; ++i) {
   bool match = true
       for (int j = 0; j < patternLength; ++j) {
       if (pattern[j] != '*' && pattern[j] != '%' && pattern[j] != '@' && pattern[j] != text[i + j]) {
    match = false; 
           break;
           }
   if (match) {
   ++count; }
    }
return count;
}
int main() {
 char text[100], pattern[100];
scin >> text >> pattern;

int result = countPatternOccurrences(text, pattern);
cout << result << endl;

    return 0;
}

#include <iostream>

void countCharacters(const char* str, int charCount[26]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            charCount[str[i] - 'a']++;
        }
    }
}
//zad2
bool PalindromePermutation(const char* s1, const char* s2) {
    char concatenatedStr[200]; 
    int charCount[26] = { 0 };
    int index = 0;
    for (int i = 0; s1[i] != '\0'; ++i) {
        concatenatedStr[index++] = s1[i];
    }
    for (int i = 0; s2[i] != '\0'; ++i) {
        concatenatedStr[index++] = s2[i];
    }
    concatenatedStr[index] = '\0';
    countCharacters(concatenatedStr, charCount);
 int oddCount = 0;
  char middleChar = '\0';
    char palindrome[200];
    for (int i = 0; i < 26; ++i) {
        if (charCount[i] % 2 != 0) {
            oddCount++;
            middleChar = 'a' + i;
        }

        for (int j = 0; j < charCount[i] / 2; ++j) {
            palindrome[index++] = 'a' + i;
        }
    }

    palindrome[index] = '\0';

    if (oddCount <= 1) {
       :cout << palindrome << middleChar;
        for (int i = index - 1; i >= 0; --i) {
            :cout << palindrome[i];
        }
      cout << :endl;
        return true;
    }
    else {
       
        return false;
    }
}

int main() {
    char s1[100], s2[100];
    std::cin >> s1 >> s2;

    isPalindromePermutation(s1, s2);

    return 0;
}
//zad3
#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
      
   int temp = arr[j];
    arr[j] = arr[j + 1];
  arr[j + 1] = temp;
}

void MergeArrays(int arrays[][100], int n) {
    int mergedArray[300]; 

    int mergedIndex = 0;

    for (int i = 0; i < n; ++i) {
        
        bool isSorted = true;
        for (int j = 0; j < arrays[i][0] - 1; ++j) {
            if (arrays[i][j + 1] < arrays[i][j]) {
    isSorted = false;
    break;
      
     }

    if (isSorted) {
  
     for (int j = 1; j <= arrays[i][0]; ++j) {
       ergedArray[mergedIndex++] = arrays[i][j];
            }
        }
        else {
           cout << "None of them are sorted" << endl;
            return;
        }
    }

   Sortingarrays(mergedArray, mergedIndex);
 for (int i = 0; i < mergedIndex; ++i) {
  cout << mergedArray[i] << " ";
    }
  cout << endl;
}
int main() {
    int n;

    cin >> n;

int arrays[100][100];
  for (int i = 0; i < n; ++i) {
 cin >> arrays[i][0];  
 for (int j = 1; j <= arrays[i][0]; ++j) {
  cin >> arrays[i][j];
   }
    }
    Sortingarrays(arrays, n);
    return 0;
}