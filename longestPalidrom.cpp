#include<iostream>
#include<unordered_map>
using namespace std;

int longestPalindrome(string s) {
        
        unordered_map<char, int> umap;

        for(int i = 0; i < s.length(); i++){           
            umap[s[i]] += 1;
        }
        
        int ans = 0;
        for(auto i = umap.begin(); i != umap.end(); i++){
            //cout << i->first << ", " << i->second << endl;
            if(i -> second % 2 == 0){
                ans += i -> second;
            }else{
                ans += (i->second - 1);
            }
        }

         if(s.length() > ans){
            ans += 1;
        }
        
        return ans;

    }

int main(){

    cout << longestPalindrome("aaa");

    return 0;
}