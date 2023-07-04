#include <iostream>

int sumOfDivisors(int number) {
    int sum = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int N = 10;
    int result = 0;

    for (int i = 1; i <= N; i++) {
        result += sumOfDivisors(i);
    }

    std::cout << "The value of the summation is: " << result << std::endl;

    return 0;
}
