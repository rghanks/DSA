#include<iostream>
#include<stack>
using namespace std;


 string simplifyPath(string path) {
        
        int len = path.length(); 
        cout << "lenght : " << len << endl;

        
        int i = 0;
        char prevChar;
        char res;
        for(auto ch : path){
            cout << ch << endl;

            if(ch == '/' && i != len-1 ){
                prevChar = ch;
            }else if(prevChar != '/' && ch != '.'){
                res += ch;
            }
        }

        cout << "res => " << res << endl;
        return "exe...";
    }


int main(){

    string s1 = "/../";

    cout <<  simplifyPath(s1) << endl;

    return 0; 
}