#include<iostream>
#include<vector>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr){
    
    //Create an output Array
    int n = arr.size();
    vector<int> output(n,1);
    
    //update the output array and return
    //complete the code
     for(int i=0; i<n; i++){
          int ans=1;
         for(int j=0; j<n; j++){
             if(j==i){
                continue;
             }else{
                 ans = ans*arr[j]; 
             }                   
         }
              output[i] = ans;
     }
    
    
    return output;
}

int main(){

    vector<int> arr = {1,2,3,4,5};

    vector<int> result =  productArray(arr);

    for(int num : result){
        cout << num << endl;
    }

    return 0;
}