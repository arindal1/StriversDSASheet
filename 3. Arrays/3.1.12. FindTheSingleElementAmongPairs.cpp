/*
Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Two important properties of XOR are the following:

XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2

Here all the numbers except the single number appear twice and so will form a pair. Now, if we perform XOR of all elements of the array,
the XOR of each pair will result in 0 according to the XOR property 1. The result will be = 0 ^ (single number) = single number (according to property 2).
*/


#include <bits/stdc++.h>
using namespace std;

void isSingle(int arr[], int n) {
    int xorr = 0;
    for(int i=0; i<n; i++) {
        xorr = xorr^arr[i];
    }
    cout << "The single element is: " << xorr << endl;
}

int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    isSingle(arr, n);
}
