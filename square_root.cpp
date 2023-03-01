#include<iostream>
using namespace std;

int squareroot(int n){

    int s = 1;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s <= e){

        int sqrt = mid * mid;

        if(sqrt == n){
            return mid;
        }else 
        if(sqrt < n){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;

    }

    return ans;

}

int main(){

    cout << squareroot(15);

}
