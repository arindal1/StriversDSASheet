#include <iostream>

void printNumbers(int N) {
    if (N <= 0) {
        return;
    }
    printNumbers(N - 1);
}
int main() {
    int N = 10;
    printNumbers(N);
    std::cout << std::endl;

    return 0;
}
