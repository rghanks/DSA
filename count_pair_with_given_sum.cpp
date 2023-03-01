#include<iostream>
#include<unordered_map>
using namespace std;

    int getPairsCount(int arr[], int n, int k) {
        // code here
        
       unordered_map<int,int> mpp;
       int res = 0;
       
       for(int i=0; i<n; i++){
           int ans = k-arr[i];
           if(mpp[ans]){              
               res += mpp[ans];            
           }
           mpp[arr[i]]++;
       }
       return res;
    }

int main(){

   int arr[5] =  {1, 5, 7, 1,5};
   cout <<  getPairsCount(arr, 5, 6) << endl;

    return 0;
}