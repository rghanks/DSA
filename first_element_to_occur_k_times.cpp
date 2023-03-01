#include<iostream>
using namespace std;

void kTimesOcc(int arr[], int n, int k, int h){

    
    int cnt[h] = {0};

    for(int i=0; i<n; i++){
        cnt[arr[i]]++;
       
        if(cnt[arr[i]] == k){
            cout << arr[i] << endl;
            break;
        }
    }

   
}

int main(){

    int A[] = {1, 7, 4, 3, 4, 8, 7};

    kTimesOcc(A,7,2,7);

    return 0;
}