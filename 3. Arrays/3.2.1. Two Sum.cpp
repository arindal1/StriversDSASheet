/*
Two Sum : Check if a pair with given sum exists in Array
Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.
*/

#include <bits/stdc++.h>
using namespace std;

string twoSum(vector<int> &arr, int n, int tar) {
    sort(arr.begin(), arr.end());
    int left=0, right=n-1;
    while (left<right) {
        int sum = arr[left]+arr[right];
        if (sum==tar) {
            return "YES";
        }
        else if(sum < tar)
            left++;
        else
            right--;
    }
    return "NO";
}

int main()
{
    int n, tar;
    cout << "Enter size of Array: "; cin >> n;
    vector<int> arr = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the target: "; cin >> tar;
    string ans = twoSum(arr, n, tar);
    cout << "Is two sum possible? " << ans << endl;
}
