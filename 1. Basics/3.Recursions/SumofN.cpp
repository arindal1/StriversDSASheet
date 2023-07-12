#include <iostream>

int sumOfNumbers(int N) {
    if (N <= 0) {
        return 0;  // Base case: stop recursion when N reaches 0 or negative
    }

    return N + sumOfNumbers(N - 1);  // Recursive call to add current number with sum of previous numbers
}

int main() {
    int N = 10;
    int sum = sumOfNumbers(N);

    std::cout << "Sum of the first " << N << " numbers: " << sum << std::endl;

    return 0;
}
