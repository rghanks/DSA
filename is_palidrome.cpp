#include<iostream>
#include <cctype>
using namespace std;

string reverse(string s){

    int n = s.length();
    for(int i=0; i< n/2; i++){
        swap(s[i], s[n-i-1]);
    }

    return s;

}


bool isPalidrome(string s){

    string res = "";
    for(auto x : s){       
        if(isalnum(x)){
            res = res + x;
        }
    }
    cout << res.size() << endl;
    string rs = reverse(res);

    cout << rs.size() << endl ;

    for(int i=0; i< res.length(); i++){
        if(tolower(res[i]) != tolower(rs[i])){
            return false;
        }
    }

    return true;
}



int main(){

    //string s = "A man, a plan, a canal: Panama";
    string s = ".,";
   
    if(isPalidrome(s)){
        cout << "This is palidrome" << endl;
    }else{
        cout << "This is not Palidrome" << endl;
    }

  

    return 0;
}