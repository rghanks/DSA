#include<iostream>
#include<vector>
using namespace std;

string keypad_problem(string s, int n){
    vector<char>v={'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','7','8','8','8','9','9','9','9'};
     string ans="";

     for(int i=0;i<n;i++){
         ans.push_back(v[s[i]-'a']);
     }

     return ans;
}
int main(){
    
    cout << keypad_problem("rahul",5) << endl;
    return 0;
}