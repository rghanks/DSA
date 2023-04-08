#include<iostream>
#include<stack>
using namespace std;


bool backspaceCompare(string s, string t) {
        int l1 = s.size();
        int l2 = t.size();
        
        stack<char> s1;
        stack<char> s2;

        for(auto ch : s){
        
             if(ch == '#'){ 
                if(!s1.empty())
                    s1.pop();
             }else{ 
                s1.push(ch);
             }
        }

        for(auto ch : t){
            if(ch == '#'){
                if(!s2.empty())                
                 s2.pop();
            }else{
                 s2.push(ch);
            }              
          
        }

        
        while(!s1.empty()){
            //cout << s1.top() << " " << s2.top() << endl;
            if(s1.top() != s2.top()) return false;

            s1.pop();
            s2.pop();
        }

        return true;

    }


int main(){

    string s1 = "a##c";
    string s2 = "#a#c";

    cout <<  backspaceCompare(s1,s2) << endl;

    return 0; 
}