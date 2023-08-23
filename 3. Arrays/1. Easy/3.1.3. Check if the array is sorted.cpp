/*
 Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not.
 If the array is sorted then return True, Else return False.
*/

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i=1; i<n; i++) {
        if(arr[i] >= arr[i-1]){

        }
        else
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The Array is sorted? ";
    if(isSorted(arr, n) == 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}
