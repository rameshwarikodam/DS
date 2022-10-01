#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &arr, int n) {
    for(int i = 0; i < n; ++i) {
        int minIndex = i;
        for(int j = i+1; j < n; ++j) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main() {
    vector<int> arr = {21,34,54,23,56,76,44};
    int n = 7;
    selectionSort(arr, n);
    cout << "Sorted List:\n";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << "  ";
    }
    return 0;
}