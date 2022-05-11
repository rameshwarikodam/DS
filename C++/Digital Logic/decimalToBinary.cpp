#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int decimal;
    int ans = 0;
    int i=0;
    // Write C++ code here
    cout << "Enter decimal:";
    cin >> decimal;
    while(decimal != 0) {
        int bit = decimal & 1;
        ans = (bit * pow(10, i)) + ans;
        decimal = decimal >> 1;
        i++;
    }
    cout << "Decimal to Binary: " << ans;
    return 0;
}