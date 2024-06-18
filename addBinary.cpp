#include<iostream>
#include<algorithm>
using namespace std;

string addBinary(string a, string b) {
        int aLen = a.length() - 1;
        int bLen = b.length() - 1;
        int carry = 0;
        string res,t1,t2;
        //cout << (a[0] - '0') + (b[0] - '0');
        t1 = "a";
        t2 = "b";
        res = t1 + t2;
        cout << res << endl;
        
        if(aLen >= bLen){            
            for(int i = bLen - 1; i >= 0; i--){
                 //cout << a[i]-'0' << "\n";
                if((a[i] - '0') + (b[i] - '0') + carry > 1){
                    carry = 1;
                    res += "0";
                }else{
                    res = (a[i] - '0') + (b[i] - '0') + carry;
                }
            }

        }

        return res;
}


//  string addBinary(string a, string b) {
//     string ans;
//     int carry = 0;
//     int i = a.length() - 1;
//     int j = b.length() - 1;

//     while (i >= 0 || j >= 0 || carry) {
//       if (i >= 0)
//         carry += a[i--] - '0';
//       if (j >= 0)
//         carry += b[j--] - '0';
//       ans += carry % 2 + '0';
//       carry /= 2;
//     }

//     reverse(begin(ans), end(ans));
//     return ans;
//   }

int main(){

    cout << addBinary("1010","1011") << endl;
   
    return 0;
}

