#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        // Flag to check if any swaps were made in the current pass
        bool swapped = false;

        // Perform a single pass of bubble sort
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements and swap if necessary
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps were made in the current pass, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n = 5;
    std::vector<int> arr = {64, 34, 25, 12, 22};

    bubbleSort(arr);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
