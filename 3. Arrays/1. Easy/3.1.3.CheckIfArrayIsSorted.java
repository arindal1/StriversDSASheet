/*
 Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not.
 If the array is sorted then return True, Else return False.
*/

// Approach 1:Rotating and Checking increasing order
class Solution {
    public boolean check(int[] nums) {
        int j=1,n=nums.length;
        for(int i=0;i<n;i++){
            if(j==n){
                return true;
            }
            else if(nums[i+1]>=nums[i]){
                j++;
                continue;
            }
            break;
        }
        for(int i=0;i<n-1;i++){
            if(nums[(i+j)%n]>nums[(i+j+1)%n]){
                return false;
            }
        }
        return true;
    }
}
// Approach 2:Flag method
class Solution {
    public boolean check(int[] nums) {
        int j=1,n=nums.length;
        boolean dec=false;
        for(int i=0;i<n-;i++){
            if(nums[i]>nums[i+1] && dec=true){
                return false;
            }
            else if(nums[i]>nums[i+1]){
                dec=true;
            }
        }
        if(nums[0]<nums[n-1] && dec=true){
            return false;
        }
        return true;
    }
}