/*
 Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once.
 The relative order of the elements should be kept the same.
 If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result.
 It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.
*/

#include <bits/stdc++.h>
using namespace std;

void removingDuplicates(int arr[], int n)
{
    int i=0;
    for(int j=1; j<n; j++)
    {
        if(arr[j] != arr[i])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout << "Number of unique elements: " << i << endl;
}

int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    removingDuplicates(arr, n);
}
