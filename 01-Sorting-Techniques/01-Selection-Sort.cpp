/*
Topic: Selection Sort

📝 INTUITION:
The idea is to select the minimum element from the unsorted portion of the array 
and swap it with the first element of the unsorted portion. We repeat this until 
the array is sorted.

- Time Complexity: O(N^2) for best, worst, and average cases.
- Space Complexity: O(1) as it happens in-place.
*/

//Here is the GFG & leetcode code snippet
class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i =0; i<n; i++){
            int mini=i;                               // we targeted the minimum No. that need to be arranged.
            for(int j=i; j<=n-1; j++){
                if(arr[j]<arr[mini]){
                    swap(arr[j],arr[mini]);
                    
                }
            }
        }
        
    }
};
// On GFG it takes :
Time Taken
0.08
Test Cases Passed
1111 / 1111
  
// ends 




// if you want to test on your computer then below is code to test. and comment out the above code 
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[mini], arr[i]);
    }
}


int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    selectionSort(arr);
    for(int num : arr) cout << num << " ";
    return 0;
}
