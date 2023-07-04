#include <iostream>

bool isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    return (originalNum == reversedNum);
}

int main() {
    int num = 12321;
    
    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome." << std::endl;
    } else {
        std::cout << num << " is not a palindrome." << std::endl;
    }

    return 0;
}
