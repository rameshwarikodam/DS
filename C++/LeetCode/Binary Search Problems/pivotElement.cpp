#include<iostream>
using namespace std;

int getpivot(int arr[], int n) {
    int s = 0, e = n - 1;
    int mid = s + (e-s)/2;
    while(s<e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else { 
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
}

int main() {
    // These elements should be less than first list
    int arr[7] = {8,10,17,0,1,3};
    int pivot;
    cout<<getpivot(arr,7);
}