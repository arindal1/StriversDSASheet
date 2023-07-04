#include <iostream>

void printNumbers(int N) {
    if (N <= 0) {
        return;  // Base case: stop recursion when N reaches 0 or negative
    }

    std::cout << N << " ";  // Print the current number

    printNumbers(N - 1);  // Recursively call the function with N-1
}

int main() {
    int N = 10;
    printNumbers(N);
    std::cout << std::endl;

    return 0;
}
