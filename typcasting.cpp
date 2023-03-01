#include <iostream>
using namespace std;

int main(){
    // cout << "Hello world" << endl;

    // int a = 'a';
    // cout << a << endl;

    // char ch = 98;
    // cout << ch << endl;

    // char ch1 = 1234567;

    // cout << ch1 << endl;

    // char ch;
    // cin >> ch;
    // cout << ch << endl;
    // if(ch >= 65 && ch <= 90){
    //     cout << "This is upper case" << endl;
    // }else 
    // if(ch >= 97 && ch <= 122){
    //     cout << "This is lower case" << endl;
    // }else 
    // if(ch >= 48 && ch <= 57){
    //     cout << "this is numeric" << endl;
    // }
    int n;
    cin >> n;

    int i=0, sum = 0;
    while(i <= n){
        sum = sum + i;
        i++;
    }

    cout << "sum is : " <<  sum << endl;

}