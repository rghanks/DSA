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
    // int n;
    // cout << "Enter no. of rows want to print: ";
    // cin >> n;
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
    // int x = 1;
    // for(int i = 1; x <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << x++ << " ";
    //     }
    //     cout << endl;
    // }

/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
    
    // for(int i = 1; i <= n; i++){
    //     int count = i;
    //     for(int j = 1; j <= i; j++){
    //         cout << count++ << " ";
    //     }
    //     cout << endl;
    // }

    /*
        1
        2 1
        3 2 1
        4 3 2 1
    */

//    for(int i = 1; i <= 4; i++){       
//         for(int j = i; j >= 1; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }

    //   char c = 'a' + 25;                                                       
    //   cout << c;

    /*
        A A A A
        B B B B
        C C C C
        D D D D
    */

    // for(int i = 0; i < 4; i++){       
    //     for(int j = 0; j < 4; j++){
    //         char c = 'A' + i;
    //         cout << c << " ";
    //     }
    //     cout << endl;
    // }

    

    return 0;
}