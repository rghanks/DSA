#include<iostream>
#include<vector>
using namespace std;

 vector<string> topKFrequent(vector<string>& words, int k) {
        
       vector<string> result;

       for(int i = 0; i < k; i++){
            result.push_back(words[i]);
       }

       return result;
       
    }


int main(){

    vector<string> s = {"i","love","leetcode","i","love","coding"};

    vector<string> res = topKFrequent(s,4);

    for(auto s : res){
        cout << s << endl;
    }

    return 0;
}