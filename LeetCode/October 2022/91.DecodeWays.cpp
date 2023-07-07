#include<iostream>
#include <cstdlib>
#include<vector>
using namespace std;
int myAtoi(string str)
    {
    // Initialize result
    int res = 0;
 
    // Iterate through all characters
    // of input string and update result
    // take ASCII character of corresponding digit and
    // subtract the code from '0' to get numerical
    // value and multiply res by 10 to shuffle
    // digits left to update running total
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
 
    // return result.
    return res;
}
    int numDecodings(string s) {
        int count = 1, flag = 1;
        if(s.length() == 1 && s.length() % 2 != 0)
            return 1;
        int num = myAtoi(s);
        while(num>0) {
            int remainder = 0;
            int divisor = 0;
            remainder = num%100;
            cout << "remainder" << remainder;
            num = num/100;
            if(remainder >= 26){
                flag = 0;
                return 1;
            }
        }
        if(flag == 1){
            return 2;
        }
        return 1;
    }
int main() {
    string str = "1212";
    cout << "Sorted List:\n" << numDecodings(str);;
    return 0;
}