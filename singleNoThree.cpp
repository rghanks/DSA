#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

  vector<int> singleNumber(vector<int>& nums) {

        unordered_map<int, int> umap;

        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]] += 1;
        }

        vector<int> ans;
        for(auto i = umap.begin(); i != umap.end(); i++){
           // cout << i->first << ", " << i->second << endl;
            if(i->second == 1){
                ans.push_back(i->first);
            }
        }
       return  ans;       
    }


int main(){

    vector<int> a = { -1,0 }; 
    vector<int> res = singleNumber(a);

    cout << res[0] << ", " << res[1] << endl;

    return 0;
}