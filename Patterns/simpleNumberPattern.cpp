
//pattern
//1 1 1
//2 2 2
//3 3 3

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i<<" ";
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
    for(int i=0;i<=n;++i){
        for(int j=0;j<=n;++j){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

// pattern
// 1 2 3 
// 1 2 3 
// 1 2 3 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}

// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int i=1,count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

    return 0;
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }

    return 0;
}

// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1,count=row;
        while(col<=row){
            cout<<count<<" "; //cout<<row+col-1<<" ";
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=row;
        while(col>=1){
            cout<<col<<" ";
            col-=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}
//2nd solution
int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row-col+1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }


// 1111
//  222
//   33
//    4

//    1
//   22
//  333
// 4444

// 1234
//  234
//   34
//    4

//    1
//   23
//  456
// 78910

//    1
//   121
//  12321
// 1234321

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1