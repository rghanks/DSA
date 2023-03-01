#include<iostream>
#include<vector>
using namespace std;

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

 vector<string> letterCombinations(string digits) {
        
        const vector<string> pad = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        if(digits.empty()) return {};

        vector<string> result;
         result.push_back("");

         for(auto digit: digits){
           // cout << digit << endl;
            vector<string> temp;
            for(auto candidate : pad[digit - '0']){
               // cout << candidate << endl;
               for(auto s: result){
              //  cout << s + candidate << endl;
                 temp.push_back(s + candidate);
               }
            }          
            result.swap(temp);
         }
         for(auto t : result){
            cout << t << endl;
           }
         return result;
    }

int main(){

    string s = "23";

    vector<string> result = letterCombinations(s);
    for(auto res : result){
        //cout << res << endl;
    }
    return 0;
}