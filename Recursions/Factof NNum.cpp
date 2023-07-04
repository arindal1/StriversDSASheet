#include <iostream>

unsigned long long factorial(int N) {
    if (N == 0 || N == 1) {
        return 1;  // Base case: stop recursion when N is 0 or 1
    }

    return N * factorial(N - 1);  // Recursive call to multiply current number with factorial of previous numbers
}

int main() {
    int N = 5;
    unsigned long long fact = factorial(N);

    std::cout << "Factorial of " << N << ": " << fact << std::endl;

    return 0;
}
