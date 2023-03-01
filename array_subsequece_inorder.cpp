#include<iostream>
#include<vector>
using namespace std;

void print_subsequence(int ind, vector<int> arr, int data[], int n){
        
        if(ind >= n){
            for(auto x : arr){
                cout << x << " ";
            }
            cout << endl;
            return;
        }

        arr.push_back(data[ind]);
        print_subsequence(ind+1, arr, data, n);

        arr.pop_back();

        print_subsequence(ind+1, arr, data, n);

}

int main(){

    int arr[] = {3,1,2};

    vector<int> ds;

    print_subsequence(0, ds, arr, 3);

    return 0;
}