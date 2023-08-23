#include <iostream>
#include <vector>

void bubbleSortRecursive(std::vector<int>& arr, int n) {
    // Base case: If the array is empty or contains only one element, it is already sorted
    if (n <= 1) {
        return;
    }

    // One pass of Bubble Sort for the current iteration
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // Swap adjacent elements if they are in the wrong order
            std::swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call to sort the remaining (n - 1) elements
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    int n = arr.size();
    bubbleSortRecursive(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
