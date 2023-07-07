#include<iostream>
using namespace std;
long long int binarySearch(int n){
    int s=0,e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        if((mid*mid)==n){
            return mid;
        }
        if((mid*mid)<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temp) {
    double ans=temp;
    double factor = 1;
    for(int i=0;i<precision;++i) {
        factor/=10;
        for(double j=ans;j*j<n;j+=factor)
        ans=j;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int tempSolution = binarySearch(n);
    cout << "Square Root with precision: "<< morePrecision(n,3,tempSolution);
}