#include <iostream>

void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return;  // Base case: stop recursion when start >= end
    }

    // Swap the first and last elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call on the remaining subarray
    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    printArray(arr, size);

    reverseArray(arr, 0, size - 1);

    std::cout << "Reversed Array: ";
    printArray(arr, size);

    return 0;
}
