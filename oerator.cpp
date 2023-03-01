#include<iostream>
#include<vector>
using namespace std;

  int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        for(int i=0; i<= prices.size()-1; i++){                 
                for(int j=i+1; j <= prices.size()-1; j++){                    
                    int p = prices[j] - prices[i];
                    if( p > 0 && p>profit){
                        profit = p;
                    }
                }
        }
        return profit;
    }

int main(){

    int a=2, b= 4;

    int z = ~a;

   // cout << "a&b " << z << endl;

  // vector<int> p = {7,1,5,3,6,4};
   vector<int> p = {1,2};

   cout << maxProfit(p) << endl;
   

    return 0;
}                                      

