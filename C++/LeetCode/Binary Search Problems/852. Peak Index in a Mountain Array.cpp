/* Let's call an array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

 

Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1
 

Constraints:

3 <= arr.length <= 104
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.
 

Follow up: Finding the O(n) is straightforward, could you find an O(log(n)) solution?
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size() - 1;
        int mid = s + (e-s)/2;
        while(s<e) {
            if(arr[mid] < arr[mid+1]) {
                s = mid + 1;
            }
            else {
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
};