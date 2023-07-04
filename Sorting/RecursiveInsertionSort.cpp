#include <iostream>
#include <vector>

void insert(std::vector<int>& arr, int n) {
    // Base case: If only one element is left, it is already sorted
    if (n <= 1) {
        return;
    }

    // Sort the first (n - 1) elements recursively
    insert(arr, n - 1);

    // Insert the last element into its correct position in the sorted part of the array
    int key = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    int n = arr.size();
    insert(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
