// A A A A 
// B B B B 
// C C C C 
// D D D D
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col =1;
        while(col<=n){
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

// A B C D 
// A B C D 
// A B C D 
// A B C D 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col =1;
        while(col<=n){
            char ch = 'A'+col-1;
            cout<<ch<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

// A B C D 
// E F G H 
// I J K L 
// M N O P 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    char ch = 'A';
    while(row<=n){
        int col =1;
        while(col<=n){
            cout<<ch<<" ";
            ch++;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

// A B C 
// B C D 
// C D E 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col =1;
        while(col<=n){
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            ch++;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

// A 
// B C 
// D E F 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col =1;
        while(col<=row){
            cout<<ch<<" ";
            ch++;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

// A 
// B C 
// C D E 
// D E F G 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col =1;
        while(col<=row){
            ch='A'+row+col-2;
            cout<<ch<<" ";
            ch++;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}

// D 
// C D 
// B C D 
// A B C D
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col =1;
         ch='A'+n-row;
        while(col<=row){
            cout<<ch<<" ";
            ch++;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    return 0;
}