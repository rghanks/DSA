#include<iostream>
#include<vector>
using namespace std;

int return_sum(int i, int sum){
      if(i < 0){
        return sum;
      }

      return_sum(i-1, sum+i);
}

void reversef(vector<int> &arr){

    int size = arr.size();

    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    // for(auto x : arr){
    //     cout << x << endl;
    // }
}


void reverse_with_recursion(int l, int r, vector<int> &arr){
             cout << l << " " << r << endl;
        if(l>=r){
            cout << l << " " << r << endl;
            return ;
        }
        swap(arr[l],arr[r]);

        reverse_with_recursion(l+1,r-1,arr);
}


bool check_paidrome(int i, int n,string str){

        if(i >= n/2){
            return true;
        }

        if(str[i] != str[n-i-1]){
            return false;
        }

        i++;

        check_paidrome(i,n,str);
}


int main(){

    // 1 2 3 4 
    // if input 3 then output - 1+2+3 = 6

  // cout << return_sum(3,0) << endl;

//    vector<int>  arr= {1,2,3,4,5,6};

//      reversef(arr);

//     for(auto x : arr){
//         cout << x << endl;
//     }

//     cout << "reverse with recursion";

//     reverse_with_recursion(0, 5, arr);

//       for(auto x : arr){
//         cout << x << endl;
//     }

    string str = "MALAYALAM";
    if(check_paidrome(0,str.length(), str)){
        cout << "palidrome" << endl;
    }else{
        cout << "not palidrome" << endl;
    }

   return 0;

}