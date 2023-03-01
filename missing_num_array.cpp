#include<iostream>
using namespace std;

int find_missing(int arr[],int n){

        int s = (n*(n+1) / 2);

        int sum = 0;
        for(int i=0; i<n-1; i++){
            sum += arr[i];
        }

        return s-sum;

}


int main(){

    int Arr[] =  {1,2,3,5};


    cout << find_missing(Arr,5) << endl;


 
    return 0;
}