// Fibonacci Series
#include <iostream>
using namespace std;
int main() {
    int a=0,b=1,n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    int nextNumber;
    for(int i=1; i<=n; i++){
        nextNumber = a + b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    }
    return 0;
}

