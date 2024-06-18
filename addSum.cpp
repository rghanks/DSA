#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            
            int pointer = i + 1;
            for(int j = pointer; j < nums.size(); j++){               
                if(nums[i] + nums[j] == target){                    
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }

        return ans;
    }

int main(){

    vector<int> a = {1,3,4,6};

    vector<int> ans = twoSum(a,5);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}