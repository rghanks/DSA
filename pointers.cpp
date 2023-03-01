#include<iostream>
using namespace std;

int main(){

    int i = 5;
    int *ptr = &i;

    cout << ptr << endl;
    cout << *ptr << endl;

    int *ptr2 = ptr;

    cout << ptr2 << " " << *ptr2  << endl;

    return 0;
}