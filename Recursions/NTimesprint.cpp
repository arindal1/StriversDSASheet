#include <iostream>

void printGFG(int n) {
    if (n <= 0) {
        return;  // Base case: stop recursion when n reaches 0 or negative
    }

    std::cout << "GFG ";  // Print "GFG"

    printGFG(n - 1);  // Recursively call the function with n-1
}

int main() {
    int n = 5;
    printGFG(n);
    std::cout << std::endl;

    return 0;
}
