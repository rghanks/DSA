#include<iostream>
using namespace std;

int main(){

   // char ch = 'A' - 1 + 5;
    //cout <<  ch << endl;
    int n;
    cin >> n;

    // int row=1;
    // while(row <= n){
    //     int col=1;
    //     while(col <= n){
    //         char ch = 'A' + row + col - 2;
    //         cout << ch << " ";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;

    // }


    // int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         char ch = 'A' - 1 + row;
    //         cout << ch << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    int count = 1;
    for(int i=1; i<= n; i++){
        for(int j=1; j <= i; j++){
            char ch = 'A' + count - 1;
            cout << ch << " ";
            count++;
        }
        cout << endl;
    }

}