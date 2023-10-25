#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (string s : strs)
            while (s.find(prefix) != 0)
                prefix = prefix.substr(0, prefix.length() - 1);
        return prefix;
    }

int main(){

    vector<string> strs = {"flower","flow","flight"};

     cout << longestCommonPrefix(strs) << endl;
     //longestCommonPrefix(strs);

    return 0;
}