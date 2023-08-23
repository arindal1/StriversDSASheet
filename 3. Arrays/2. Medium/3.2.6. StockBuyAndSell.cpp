/*
Stock Buy And Sell
Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and 
sell on day 5 (price = 6), profit = 6-1 = 5.

Note: That buying on day 2 and selling on day 1 
is not allowed because you must buy before 
you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are 
done and the max profit = 0.
*/

#include <bits/stdc++.h>
using namespace std;

void MaxProfit(int arr[], int n)
{
    int maxP = 0;
    int minP = INT_MAX;

    for (int i=0; i<n; i++) {
        minP = min(minP, arr[i]);
        maxP = max(maxP, arr[i] - minP);
    }
    cout << "Maximum Profit is: " << maxP << endl;
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
    MaxProfit(arr, n);
    return 0;
}
