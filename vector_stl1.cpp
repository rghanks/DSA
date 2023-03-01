#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Demo vector
    //vector<int> arr = {1,2,3,12,15};

    // fill constructor
    vector<int> arr(10,7);

    // pop_back();

    arr.pop_back();

    // push_back()
    arr.push_back(16);

    // print all element in vector
    // for(int i=0; i< arr.size(); i++){
    //     cout << arr[i] << endl;
    // }

    for(int x : arr){
        cout << x << endl;
    }

    // size of the vector
    cout << arr.size() << endl;

    // capacity of the vector
    cout << arr.capacity() << endl;

    return 0;

}