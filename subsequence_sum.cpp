#include<iostream>
#include<vector>
using namespace std;


void printS(int ind, vector<int> &ds,int s, int sum, int arr[], int n){

        if(ind == n){          
            if(sum == s){
                for(auto it : ds){
                    cout << it << " ";
                }
                cout << endl;
            }

            return;
        }

          ds.push_back(arr[ind]);
          s += arr[ind];

          printS( ind +1 ,ds,s,sum,arr,n);

          ds.pop_back();
          s -= arr[ind];

          printS( ind +1 ,ds,s,sum,arr,n);


}


int main(){

  

    int arr[] = {1,2,1};

    vector<int> ds;

    printS(0,ds,0,2,arr,3);

      return 0;

}