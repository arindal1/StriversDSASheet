/*
Sort an array of 0s, 1s and 2s
Problem Statement: Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions.
( Expected: Single pass-O(N) and constant space)
*/

#include <bits/stdc++.h>
using namespace std;

int sorted(vector<int> &arr, int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    vector<int> arr = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The sorted array:";
    sorted(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
