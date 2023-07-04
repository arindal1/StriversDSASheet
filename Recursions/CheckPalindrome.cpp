#include <iostream>
#include <string>

bool isPalindrome(const std::string& str, int start, int end) {
    if (start >= end) {
        return true;  // Base case: stop recursion when start >= end
    }

    if (str[start] != str[end]) {
        return false;  // Characters at start and end positions don't match
    }

    // Recursive call on the substring between start and end
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    std::string str = "madam";

    if (isPalindrome(str, 0, str.length() - 1)) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not a Palindrome" << std::endl;
    }

    return 0;
}
