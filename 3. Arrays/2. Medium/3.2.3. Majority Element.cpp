/*
Find the Majority Element that occurs more than N/2 times
Problem Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array.
You may consider that such an element always exists in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int sorted(vector<int> &arr, int n)
{
    int cnt = 0;
    int el;
    // Moore’s Voting Algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = arr[i];
        }
        else if (el == arr[i]) cnt++;
        else cnt--;
    }
    //checking if the stored element is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
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
