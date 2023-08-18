/*
Rearrange Array Elements by Sign
Variety-1

Problem Statement:

There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

Note: Start the array with positive elements.

Example 1:

Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5

Explanation: 

Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> Rearrange(vector<int> ar, int n)
{
    vector<int> res(n,0);
    int pos = 0, neg = 1;

    for (int i=0; i<n; i++) {
        if (ar[i] < 0) {
            res[neg] = ar[i];
            neg += 2;
        }
        else {
            res[pos] = ar[i];
            pos += 2;
        }
    }
    return res;
}

int main()
{
    int n, a;
    cout << "Enter size of Array: ";
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    vector<int> ans = Rearrange(arr, n);

    for (int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
