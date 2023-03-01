#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int  romanToInt(string s){
    
    unordered_map<char, int> T= {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    int sum = T[s[s.length()-1]];
  
    for(int i= s.length()-2; i >= 0; --i){      
       
       // cout << T[s[i]] << " " << T[s[i+1]] << endl;
        if(T[s[i]] < T[s[i+1]]){
            sum = sum - T[s[i]];
        }else{
            sum = sum + T[s[i]];
        }

    }

    return sum;
} 


 int removeElement(vector<int>& nums, int val) {
         int k =0;
        for(int i =0; i<nums.size();i++){
                (nums[i]!=val) ? nums[k++]=nums[i]:NULL;
        }
        return k;
    }

 int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        for(auto i : nums){
            //cout << i << endl;
            if(i >= target ){
                return index;
            }else{
                index++;
            }
        }

        return index;
    }

int main(){

  //  cout << "Hellow wordl" << endl;

   //cout << romanToInt("MCMXCIV") << endl;

    // vector<int> vect;
    // vect.push_back(1);
    // vect.push_back(3);
    // vect.push_back(5);
    // vect.push_back(6);

  // cout << removeElement(vect,10) << endl;

  // cout << searchInsert(vect,5) << endl;

    string s = "125";

    int sum = s[2]- '0';

    cout << sum << endl;

}


