#include<iostream>
using namespace std;

 bool isHappy(int n) {        

        int total = 0, i=0;
        while(n != 1 && i<= 10000){
          
            while(n > 0){
                int rem = n%10;
                total += rem*rem;
                n = n/10;
            }          

            n = total;
            total = 0;   
            i++;                         
       }

        if(n == 1)
            return true;

            return false;
    }

int main(){

        isHappy(19);
}