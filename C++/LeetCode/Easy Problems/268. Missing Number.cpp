/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.
 

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?

*/

/* APPROACH
Lets suppose array given is [9,6,4,2,3,5,7,0,1]

now maximum number will be 9 i.e size of array and minimum number will be 0.

Since there is no repetition, each number will occur only once.
According to solution there is only 1 missing number.

Hence if we sum all the number between minimum and maximum and subtract with sum of all the number given in array. We will get the missing number.
*/

//************ SOLUTION ************
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsTotal=0, sumsTotal=0;
        int n=nums.size();
        for(int i=0;i<nums.size();++i){
            numsTotal+=nums[i];
            sumsTotal=sumsTotal+n--;
        }
        return sumsTotal-numsTotal;
    }
};