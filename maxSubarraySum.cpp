#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int>& nums){

        // nmax is maximum sum
        // nsum is the current sum
        // when hitting positive number, nsum should sum the current number if positive, otherwise update to the current number
        // when hitting negative number, nsum should sum the current number, update nmax if it is smaller
        int nmax = nums[0];
        int nsum = nmax;
        int n = nums.size();

        if ( n == 0 ) return nmax;

        for ( int i = 1; i<n; i++)
        {
            if ( nums[i] >= 0 )
            {
                if ( nsum >= 0 ) 
                    nsum += nums[i];
                else
                    nsum = nums[i];

                nmax = max(nmax,nsum);
            }
            else
            {
                nsum += nums[i];
                if ( nmax < nums[i])   
                    nmax = nums[i];
            }
        }
        return nmax;
}


int main(){

    vector<int> nums = {-1,2,3,4,-2,6,-8,3};
    cout << maxSubarraySum(nums) << endl;

    return 0;
}