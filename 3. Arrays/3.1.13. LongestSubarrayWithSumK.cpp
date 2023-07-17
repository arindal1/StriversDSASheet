/*
 Given an array and a sum k, we need to
 print the length of the longest subarray that sums to k.
 (positives only)
*/

#include <bits/stdc++.h>
using namespace std;

int longSubarray(vector<int>& v, int n, long long k) {
    int left = 0, right = 0;
    long long sum = v[0];
    int maxLen = 0;
    while (right < n) {
        while (left <= right && sum > k) {
            sum -= v[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n) sum += v[right];
    }
    return maxLen;
}

int main()
{
    int n;
    cout << "Enter size of Array: "; cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.emplace_back(a);
    }
    long long sum;
    cout << "Enter the Sum of subarray: ";
    cin >> sum;
    longSubarray(v, n, sum);
}
