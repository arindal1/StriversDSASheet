#include <iostream>

int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return calculateGCD(b, a % b);
}

int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int A = 12;
    int B = 18;

    int gcd = calculateGCD(A, B);
    int lcm = calculateLCM(A, B);

    std::cout << "GCD of " << A << " and " << B << " is: " << gcd << std::endl;
    std::cout << "LCM of " << A << " and " << B << " is: " << lcm << std::endl;

    return 0;
}
