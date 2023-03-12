#include<iostream>
using namespace std;

  bool isPalidrome(string s){
        string r = s;
        int n = r.length();
        for(int i=0; i < n/2; i++){
            swap(r[i], r[n-i-1]);
        }     
       
      // cout << s << " " << r << endl;

        for(int i=0; i< n; i++){
            if(s[i] != r[i]){
                //cout << "false" << endl;
                return false;
            }
        }

       return true;
    }



int main(){

    string s = "bad";  
    int n = s.length();

    cout << isPalidrome(s) << endl;

    for(int i=0; i< n; i++){
        string sbstr = s.substr(i,n);       
        if(isPalidrome(sbstr)){
            cout << sbstr << endl;
            break;
        }
    }  

    return 0;

}