#include<iostream>
#include<vector>
using namespace std;

 int search(vector<int>& nums, int target) {
        
            int s = 0;
            int e = nums.size() - 1;
            int mid = ( s + e )/2;
            
            while(s < e){
                if(nums[mid] == target) return mid;
                
                if(nums[mid] < target){
                    s = mid + 1;
                }else{
                    e = mid - 1;
                }

                mid = ( s + e )/2;              
            }
        return -1;
    }


    int main(){

       vector<int> nums = {-1,0,3,5,9,12};

        cout <<   search(nums,9) << endl;

        return 0;
    }