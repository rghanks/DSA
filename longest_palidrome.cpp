#include<iostream>
#include<unordered_map>
using namespace std;

    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int oddCount = 0;
        int n = s.length();

        for(int i=0; i< n; i++){
            mp[s[i]]++;   

           // cout << s[i] << " " << mp[s[i]] << endl;
           
            if(mp[s[i]] %2 == 0){
                oddCount--;
            }else{
                oddCount++;
            }
        }

        if(oddCount > 1) return n - oddCount +1 ;

        return n;
        
    }

int main(){

    string s = "abccccdd";

    cout << longestPalindrome(s);

    return 0;
}