/*
Given an array of integers, rotating array of elements by k elements either left or right.
*/


#include <bits/stdc++.h>
using namespace std;

/*
void reverse(int arr[], int start, int end)
{
    while(start <= end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end] =temp;
        ++start;
        end--;
    }
}*/

void leftRotate(int arr[], int n, int k)
{
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    int arr[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    leftRotate(arr, n, k);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
