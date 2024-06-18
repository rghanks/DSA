#include<iostream>
#include<cmath>
using namespace std;

 bool judgeSquareSum(int c) {
        
        long left = 0;
        long right = sqrt(c);

        while( left <= right){
            int sum = left*left + right*right;
            if(sum == c){
                return true;
            }else if(sum < c){
                left++;
            }else{
                right--;
            }
        }

        return false;

    }

int main(){

    cout << judgeSquareSum(45) << endl;

    return 0;
}