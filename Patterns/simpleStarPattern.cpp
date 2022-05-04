//pattern
//***
//***
//***

//using while loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

//using for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// *
// * *
// * * *
// * * * *
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*"<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

    return 0;
}


// n=4
//    *
//   **
//  ***
// ****
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here;
    int n;
    cin>>n;
    int row = 1;
    while(row <= n) {
        int space = n-row;
        while(space){
            cout<<"  ";
            space--;
        }
        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<"\n";
        row++;
    }
    return 0;
}

// ****
// ***
// **
// *


// ****
//  ***
//   **
//    *