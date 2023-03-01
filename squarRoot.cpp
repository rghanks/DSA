#include <iostream>
using namespace std;

int getSquareRoot(int n){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s<=e){
        
        int sq = mid*mid;
       
        if(sq == n){
            return mid;
        }

        if(sq < n){
            ans = mid;
            s = mid +1;
        }else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }

}

int main(){

    cout << getSquareRoot(6) << endl;

}