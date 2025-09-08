// C++: Calculate the sum of an array
#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;   // use 0 instead of 'o'
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]); // use 0, not 'o'
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl; // fix missing colon in string
    return 0;
}
