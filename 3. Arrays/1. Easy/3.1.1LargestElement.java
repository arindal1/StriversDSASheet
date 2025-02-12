/*
Given an array, we have to find the largest element in the array.
*/

class Solution {
    public static int largest(int[] arr) {
        // code here
        int max = Integer.MIN_VALUE;
        for(int i:arr){
            if(i>max){
                max=i;
            }
        }
        return max;
    }
}

// Method I:Linear Search
//     Steps:
//         1.Took a var max initialized to -infinity
//         2.Linearly compare with every element present in the array
//         3.After comparing with all elements we got the largest element
//     Time complexity: O(N)

// Method II:Sorting
//     Steps:
//         1.Sort the array using arrays.sort() function
//         2.Last element will be the largest one
//     Time Complexity:O(nlogn) Merge Sort or Quick Sort will take nlogn


