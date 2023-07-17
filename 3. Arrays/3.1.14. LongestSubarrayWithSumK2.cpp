/*
 Given an array and a sum k, we need to
 print the length of the longest subarray that sums to k.
 (positives + negetives)
*/

#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size();
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
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
    getLongestSubarray(v, sum);
}
