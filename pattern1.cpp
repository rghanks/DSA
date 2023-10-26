#include<iostream>
using namespace std;


//Q1. print pattern 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
/*
int main(){

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

// print patttern
/*
*
* *
* * *
* * * *
* * * * *
*/

int main(){
    int n;
    cout << "Enter no. of rows want to print: ";
    cin >> n;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


/*
 1
 2 3 
 4 5 6
 7 8 9 10
*/
    int x = 1;
    for(int i = 1; x <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << x++ << " ";
        }
        cout << endl;
    }



    return 0;
}