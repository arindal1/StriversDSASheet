/*
Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N),
that is not present in the given array.
*/

#include <bits/stdc++.h>
using namespace std;

void missingNum(int arr[], int n)
{
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=i+1){
            c++;
            i++;
        }
    }
    cout << "The number of missing numbers: " << c << endl;
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
    missingNum(arr, n);
    return 0;
}
