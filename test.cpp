#include<iostream>
using namespace std;

class Solution {
public:
	int countDigits(int num) {
        int n=num;
        int cnt=0;
        while(n){
            int r=n%10;
            n=n/10;
            if(num%r==0)cnt++;
        }
        return cnt;
    }
};

int main () {
    Solution s1;
    cout << s1.countDigits(121);
    return 0;
}