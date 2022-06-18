#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    //HERE, when start>end, everything will become a mess
    //check until start<=end
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        //when key is greater, GO TO right part
        if(key > arr[mid]){
            start = mid + 1;
        }
        //when key is lesser, GO TO left part
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main() {
    int even[6] = {2,4,12,18,23,45};
    int odd[7] = {4,5,7,15,45,78,87};
    int key;
    cout << "Enter key to search:";
    cin >> key;
    int evenIndex;
    evenIndex = binarySearch(even, 6, key);
    cout << "Element: " << key <<" found at position " << evenIndex << endl;
    int oddIndex;
    oddIndex = binarySearch(odd, 7, key);
    cout << "Element: " << key <<" found at position " << oddIndex << endl;
}