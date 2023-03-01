#include<iostream>
#include<vector>
using namespace std;

    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here       
     
          vector<vector<int> > ans;
            for(int i=1;i<n;i++){

                if(A[i]>A[i-1])

                ans.push_back({i-1,i});

            }

        return ans;
        
        
    }

int main(){

    vector<int> A = {100,180,260,310,40,535,695};

   vector<vector<int> > ans =  stockBuySell( A, 7);

   for(auto x : ans){
       for(auto xx : x){
        cout << xx << " ";
       }
       cout << endl;
   }

 
    return 0;
}