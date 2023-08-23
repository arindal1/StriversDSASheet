/*
Given an array, find the second smallest and second largest element
in the array. Print ‘-1’ in the event that either of them doesn’t exist.
*/

#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    int largest=arr[0], slargest=-1;
    for(int i=0; i<n; i++){
        if (largest<arr[i]){
            slargest = largest;
            largest=arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}
int secondSmallest(int arr[], int n)
{
    int smallest=arr[0], ssmallest = INT_MAX;
    for(int i=0; i<n; i++){
        if (arr[i]<smallest){
            ssmallest = smallest;
            smallest=arr[i];
        }
        else if(arr[i] != smallest && arr[i] < smallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Second Largest element: " << secondLargest(arr, n) << endl;
    cout << "Second Smallest element: " <<secondSmallest(arr, n) <<endl;
}
