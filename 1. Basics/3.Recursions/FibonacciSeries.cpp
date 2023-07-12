#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case: stop recursion when n is 0 or 1
    }

    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call to calculate the nth Fibonacci number
}

int main() {
    int n = 7;
    int result = fibonacci(n);

    std::cout << "Fibonacci number at position " << n << ": " << result << std::endl;

    return 0;
}
