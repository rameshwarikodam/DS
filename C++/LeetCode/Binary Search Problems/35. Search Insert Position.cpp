/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104
*/
/*
APPROACH
Eg: [2,5,11,24,30,45,56]
target=33
Lets find out how:
s=0
e=6
mid=6/2=3
..0<=6.. //while condition
key==arr[mid]
33==24 //if condition
key>arr[mid]
s=3+1=4

4<=6
mid=10/2=5
key==arr[5]
33==45 //NO
key>arr[5]
s=5+1=6

6<=6
mid=12/2=6
key==arr[6]
33==56 //NO
key>arr[6] // NO
e=5

6<=5 // NO
return 5 // WHICH IS EXPECTED SOLUTION
*/
 
 // ***************** SOLUTION ****************
 #include<iostream>
 #include<vector>
 using namespace std;
 int searchInsert(vector<int>& nums, int target) {
    int s=0,e=nums.size()-1;
    while(s<=e) {
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(target>nums[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return s;
 }