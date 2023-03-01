#include <iostream>
using namespace std;



int selectionSort(int arr[],int n){

    for(int i=0; i < n-1; i++){

         int minIndex = i;
      
        for(int j=minIndex+1; j<n; j++){  

            if(arr[minIndex] > arr[j]){

               minIndex = j;

            }
        }

        // swap(arr[minIndex], arr[i]);

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){

  //int arr[5] = {4, 5, 1, 3, 2};
  int arr[5] = {6,2,8,4,10};
    
    selectionSort(arr, 5);

    for(int i =0; i<5; i++){
        cout << arr[i] << endl;
    }

}