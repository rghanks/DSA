#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

 int minIncrementForUnique(vector<int>& nums) {
        unordered_map<int, int> m;

        for(int i=0; i< nums.size(); i++){
            m[nums[i]]++;
        }

        for(auto i : m){
            cout << i.first << " -> " << i.second << endl;
        }

        cout << m[1] << endl;
    }

int main(){
    // int x = 0;
    // cout << (~x) << endl;
    // return 0;

    vector<int> m = { 3,2,1,2,1,7 };

    cout << "Total moves is : " << minIncrementForUnique(m) << endl;

    return 0;

}