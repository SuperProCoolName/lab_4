#include <iostream>
#include <random>
using namespace std;

void main() {
    srand(time(0));
    int n = (rand() % 10) + 1; // Generate random n
    int* array = new int[n];
    cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - j - 1; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
}
