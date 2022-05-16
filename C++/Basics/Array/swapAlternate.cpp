#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    int temp=0;
    for(int i=0;i<size;i+=2) {
        if(i+1 < size) {
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1] = temp;
        }
    }
}
void printArray(int arr[], int size) {
    for(int i=0;i<size;i++){
        cout << arr[i] << "  ";
    }
    cout<<endl;
}
int main() {
    int n;
    cout<< "Enter size of array:\n";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    swapAlternate(arr, n);
    cout << "Swapped elements are:\n";
    printArray(arr, n);

    return 0;
}