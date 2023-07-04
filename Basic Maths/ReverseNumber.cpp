#include <iostream>
#include <bitset>
using namespace std;

unsigned int reverseBinary(unsigned int X) {
    unsigned int result = 0;

    for (int i = 0; i < 32; i++) {
        result <<= 1;
        if (X & 1)
            result |= 1;
        X >>= 1;
    }

    return result;
}

int main() {
    unsigned int X = 123456789;
    unsigned int reversed = reverseBinary(X);

    cout << "Original number (decimal): " << X << endl;
    cout << "Original number (binary): " << bitset<32>(X) << endl;
    cout << "Reversed number (decimal): " << reversed << endl;
    cout << "Reversed number (binary): " << bitset<32>(reversed) << endl;

    return 0;
}
