#include<iostream>
#include<vector>
using namespace std;

vector<int> zig_zag(int arr[],int n){

    for(int i=0; i<n-1; i++){
        //cout << arr[i] << " ";

        if( i%2 == 0){
             if(arr[i] > arr[i+1] ){
                swap(arr[i],arr[i+1]);
             }
        }else{
             if(arr[i] < arr[i+1] ){
                swap(arr[i],arr[i+1]);
             }
        }     

    }

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

}


int main(){

    int Arr[] = {1, 4, 3, 2}; //{4, 3, 7, 8, 6, 2, 1};

    vector<int>  ans = zig_zag(Arr,4);

    // for(auto x : ans){
    //     cout << x << " ";
    // }

    return 0;
}