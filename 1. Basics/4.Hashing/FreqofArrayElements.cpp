#include <iostream>
#include <vector>
#include <unordered_map>

void countFrequencies(std::vector<int>& arr, int N) {
    std::unordered_map<int, int> freqMap;

    // Count the frequencies of elements from 1 to N
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= N) {
            freqMap[arr[i]]++;
        }
    }

    // Print the frequencies
    for (int i = 1; i <= N; i++) {
        std::cout << "Frequency of " << i << ": " << freqMap[i] << std::endl;
    }
}

int main() {
    int N = 5;
    std::vector<int> arr = {1, 3, 2, 2, 4, 3, 5, 2};

    countFrequencies(arr, N);

    return 0;
}
