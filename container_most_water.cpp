#include<iostream>
#include<vector>
using namespace std;

  int maxArea(vector<int>& height) {
        
        for(auto x : height){
            cout << x << endl;
        } 

    }

int main(){

    vector<int> height = {1,8,6,2,5,4,8,3,7};
    maxArea(height);

    return 0;
}