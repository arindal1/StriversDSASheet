/*
 Given an array, and an element num the task is to find
 if num is present in the given array or not. If present print the index of the element or print -1.
 */

#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int e)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==e){
            cout << e << " was found in index: " << i+1 << endl;
            break;
        }
    }
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
    int e;
    cout << "Enter the element to be searched: "; cin >> e;
    linearSearch(arr, n, e);
    return 0;
}
