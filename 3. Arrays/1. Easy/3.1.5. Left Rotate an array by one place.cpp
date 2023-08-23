/*
 Given an array of N integers, left rotate the array by one place.
*/


#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n)
{
    int temp=arr[0];
    for(int i=1; i<n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0; i<n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    rotateArray(arr, n);
}
