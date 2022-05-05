/* Given a signed 32 - bit integer x, return x with its digits reversed.If reversing x causes the value
to go outside the signed 32 - bit integer range[-231, 231 - 1], then return 0.

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21

Constraints:

-2^31 <= x <= 2^31 - 1
*/

class Solution
{
public:
    int reverse(int x)
    {
        int reverse = 0;
        while (x != 0)
        {
            int rem = x % 10;
            if ((reverse > INT_MAX / 10) || (reverse < INT_MIN / 10))
            {
                return 0;
            }
            reverse = (reverse * 10) + rem;
            x /= 10;
        }
        return reverse;
    }
};

/*
The condition on line 31 is that,
we have given the constraints, the number should not exceed the max integer limit. i.e. 2147483647(INT_MAX) 
and number should not be less than min integer limit. i.e. -2147483648(INT_MIN)
*/