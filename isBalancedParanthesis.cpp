#include<iostream>
#include<stack>
#include<string>
using namespace std;

 bool isValid(string s) {
        
        stack<char> st;
        for(auto ch : s){
           // cout << ch << endl;
           
            switch(ch){
                case '(':
                case '[':
                case '{': st.push(ch);
                          break;

                case ')': if(!st.empty() && st.top() == '('){
                                st.pop();              
                            }else{
                                return false;
                            }
                            break;
                case ']': if(!st.empty() && st.top() == '['){
                                st.pop();                      
                            }else{
                                return false;
                            }
                            break;   
                case '}': if(!st.empty() && st.top() == '{'){
                                st.pop();                                                          
                            }else{
                                return false;
                            }
                            break;   
                default : continue;
            }         

        }
       //  cout << st.top() << " <= " << endl;
        if(st.empty() == true){
            return true;
        }else{
            return false;
        }
        
    }


    int main(){

        string s = "()";

        if(isValid(s)){
            cout << "true" << endl;
        }else{
            cout << "false" << endl;
        }

        return 0;
    }