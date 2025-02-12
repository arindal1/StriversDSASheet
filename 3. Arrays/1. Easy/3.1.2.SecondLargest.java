/*
Given an array, find the second largest element
in the array. Print ‘-1’ in the event that doesn’t exist.
*/

class Solution {
    public int getSecondLargest(int[] arr) {
        // Code Here
        int first=-1,second=-1;
        for(int i:arr){
            if(i>first){
                second=first;
                first=i;
                }
            else if(i>second && i!=first){
                second=i;
            }
        }
        return second;
    }
}

/*
Approach:Linear Search
    Took two variable first largest and second largest
    Compared with all the elements while updating simultaneously 
    Take care of all the Test cases specially [10,10,10]

Alternate approach:Sorting
    Sort the array 
    Return second last element if no of integers are more than 1 else return -1
*/

