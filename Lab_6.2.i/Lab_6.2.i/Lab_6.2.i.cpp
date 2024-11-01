#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Функція для створення масиву
void create(int* arr, const int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

// Функція для виведення масиву
void print(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

// Функція для знаходження індексу найбільшого непарного елемента
int findLargestOddIndex(int* arr, const int size) {
    int largestOdd = -1;
    int largestOddIndex = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0 && (largestOdd == -1 || arr[i] > largestOdd)) {
            largestOdd = arr[i];
            largestOddIndex = i;
        }
    }
    return largestOddIndex;
}

// Функція для обміну останнього елемента з найбільшим непарним
void swapLastWithLargestOdd(int* arr, const int size) {
    int largestOddIndex = findLargestOddIndex(arr, size);
    if (largestOddIndex != -1) { // Якщо є непарний елемент
        int lastIndex = size - 1;
        swap(arr[largestOddIndex], arr[lastIndex]);
    }
}

int main() {
    srand((unsigned)time(0));

    const int SIZE = 10;
    int MIN = -10;
    int MAX = 10;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX);

    print(arr, SIZE);

    swapLastWithLargestOdd(arr, SIZE);

    print(arr, SIZE);

    delete[] arr;
    return 0;
}
