#include<iostream>
#include<vector>
using namespace std;

    vector<int> subarraySum(int arr[], int n, long long s)
    {       
        int i = 0;
        int j = 0;
        long long sum = arr[0];
        
        while(i<n && j<n){
           // cout << sum << endl;
            if(sum == s){
                return { i+1, j+1};
            }
            
            if(sum > s){                 
                sum = sum - arr[i];
                i++;
            }else{
                j++;
                sum = sum + arr[j];
            }
            
        }
        
        return {-1};
        
    }

int main(){

    int A[] = {1,2,3,7,5};

    vector<int> ans = subarraySum(A, 5, 12);

    for(auto x : ans){
        cout << x << " ";
    }

    return 0;
}