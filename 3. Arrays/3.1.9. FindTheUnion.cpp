/*
Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

The union of two arrays can be defined as the common and distinct elements in the two arrays.
NOTE: Elements in the union should be in ascending order.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> isUnion(int arr1[], int arr2[], int n, int m)
{
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    int i = 0, j = 0;
    vector < int > Union;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j])
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
            Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

int main()
{
    int n;
    cout << "Enter size of Array 1: ";
    cin >> n;
    int arr1[n]={0};
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int m;
    cout << "Enter size of Array 2: ";
    cin >> m;
    int arr2[m]={0};
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    vector < int > Union = isUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto & val: Union)
        cout << val << " ";
    return 0;
}
