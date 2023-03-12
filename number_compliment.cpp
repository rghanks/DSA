#include<iostream>
using namespace std;

int findComplement(int num) {

    while( num != 0 ){
        int left_shift = num >> 1;
        left_shift = left_shift >> 1;
       // cout << left_shift << " <= " << endl;
        break;
    }

}

int main(){

   cout << findComplement(7) << endl;

   cout << (5&2) << endl;

    return 0;
}