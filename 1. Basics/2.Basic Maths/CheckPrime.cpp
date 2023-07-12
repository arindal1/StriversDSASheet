#include <iostream>
#include <vector>
#include <climits>

int minJumps(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> jumps(n, INT_MAX);  // Initialize jumps array with maximum values
    jumps[0] = 0;  // Minimum number of jumps required to reach the first element is 0

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (j + arr[j] >= i) {
                // If it is possible to reach index 'i' from index 'j'
                // update the minimum number of jumps required
                jumps[i] = std::min(jumps[i], jumps[j] + 1);
            }
        }
    }

    return jumps[n - 1];
}

int main() {
    std::vector<int> arr = {2, 3, 1, 1, 4};
    int minJumpsRequired = minJumps(arr);

    std::cout << "Minimum number of jumps required: " << minJumpsRequired << std::endl;

    return 0;
}
