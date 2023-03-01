#include<iostream>
using namespace std;

int main(){

    int n=0;
    cin >> n;

    // for(int i=1; i<= n; i++){
    //     for(int j=1; j<= n; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int x = 1;
    // for(int i=1; i<= n ; i++){
    //     for(int j=1; j<= n; j++){
    //         cout << x++ << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

     for(int i=1; i<=n; i++){
        for(int j=i; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }

}