#include<iostream>
using namespace std;

    int scoreOfString(string s) {
        // cout << s[0] + 0 << endl;

        // if(s.length() < 2){
        //     return 
        // }

        int ans = 0;
        for(int i = 0; i < s.length()-1; i++ ){
            if((s[i] + 0) > (s[i+1] + 0)){
                ans += (s[i] + 0) - (s[i+1] + 0);
             }else{
                ans += (s[i+1] + 0) - (s[i] + 0);
            }
        }

         return ans;
    }

int main(){

    cout << scoreOfString("hello") << endl;

    return 0;
}