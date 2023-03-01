#include <iostream>
using namespace std;

int getPivot(int arr[],int n){

  int  s = 0;
   int e = n-1;
   int  mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid] >= arr[0]){
            s = mid+1;
        }else{
            e = mid;
        }
       mid = s + (e-s)/2;
    }
     return s;
}

int binarySearch(int arr[],int start, int end, int k){

    int s =start;
    int e = end;
    int mid = s + (e-s)/2;

    while(s<=e){
        
        if(arr[mid] == k){
            return mid;
        }

        if(arr[mid] > k){
            e = mid - 1;
        }else{
            s = mid + 1;
        }

      mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    int arr[5] = {3,7, 9, 1, 2};

    int pivot =  getPivot(arr,5);

    int k = 2;
    int s = 0;
    int e = 5 -1;

   // cout << "Pivot is "  << getPivot(arr, 5) << endl;

    if(arr[pivot] <= k && k <= arr[e]){

        cout << "Binary search1 : " << binarySearch(arr, pivot, e, k) << endl;

    }else{

        cout << "Binary search2 : " <<  binarySearch(arr, s, pivot-1, k) << endl;

    }
   
}