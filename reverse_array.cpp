#include<iostream>
using namespace std;

int main(){
    int n =5;
    int arr[5] = {1,2,3,4,5};

    for(int i=0; i<n; i++){
        cout << arr[n-i-1] << endl;
    }

    return 0;
}