#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    
	   int product = 1;
	   int maxN=INT_MIN;
	   
	   for(int i=0; i<n; i++){
	       product = product*arr[i];
	       
	       maxN = max(product,maxN);
           cout << maxN << endl;
	       
	       if(product == 0){
	           product = 1;
	       }
	       
	   }
	   
        cout << maxN << endl;

	   product = 1;
	   
	     for(int i=0; i<n; i++){
	       product = product*arr[n-i-1];
	       
	       maxN = max(product,maxN);
	       
	       if(product == 0){
	           product = 1;
	       }
	       
	   }
	   
	   return maxN;
	   
	}

int main(){

    vector<int> arr =  {6, -3, -10, 0, 2};

    cout << maxProduct(arr,5) << endl;

    return 0;
}