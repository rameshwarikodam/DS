/*

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000

>>>>>>>>>>>>>>>>>APPROACH>>>>>>>>>>>>>>>
We need to store the unique occurance of every number.
We will use set, set stores only non duplicate values.
we will add the frequency of each number and before adding will check if that frequency is already occured in the set.
use the count() of STL, which returns a non zero value if the number is already present, return 0 if not present.
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        for(int i: arr){
            mp[i] += 1;
        }
        set<int> st;
        for(auto i: mp) {
            // second gives the frequency count
            if(st.count(i.second) > 0)
                return 0;
            else
                st.insert(i.second);
        }
        return 1;
    }
};