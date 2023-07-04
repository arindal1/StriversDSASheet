#include <iostream>

std::string isArmstrongNumber(int number) {
    int originalNumber = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    if (sum == originalNumber) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int number = 371;

    std::string result = isArmstrongNumber(number);
    std::cout << result << std::endl;

    return 0;
}
