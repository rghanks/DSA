#include<iostream>
using namespace std;

  int reverse(int x) {
        
        int res = 0, rem = 0;        
        while(x != 0){
             rem = x%10;
             res =res*10 + rem;                    
             x = x/10;
        }

        return res;
    }

int main(){

    cout << reverse(123) << endl;

    return 0;
}