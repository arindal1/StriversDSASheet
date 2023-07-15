/*
Given an array, we have to find the largest element in the array.
*/

#include <iostream>
using namespace std;

int largestElement(int arr[], int n)
{
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if (largest<=arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Largest Element is: " << largestElement(arr, n) << endl;
}
