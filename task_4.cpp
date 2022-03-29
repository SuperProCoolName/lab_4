#include <iostream>
using namespace std;

int BINARY_SEARCH(int array[], int size, int v) {
	int begin = 0, end = size, k, result = NULL;
	while (end >= begin) {
		k = ((begin + end) / 2);
		if (array[k] == v)
			result++;
		if (array[k] > v)
			end = k - 1;
		else
			begin = k + 1;
	}
	return result;
}

int main() {
	int size, v;
	cout << "Enter array size: ";
	cin >> size;
	int* array = new int[size];
	cout << "Enter array values: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	cout << "Enter number that needs to be found: ";
	cin >> v;
	int result = BINARY_SEARCH(array, size, v);
	if (result == NULL)
		cout << "Value not found";
	else
		cout << "Times number was found: " << result;
	return 0;
} 
