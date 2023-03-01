#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

   vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X){
        // code here      

       vector< pair<int, int> > p;
       unordered_map<int,int> mp;

       for(int i=0;i<M; i++){
            mp[B[i]];
       }
     
        for(int i=0; i<N; i++){
             int n = X - A[i];
            if(mp.find(n) != mp.end()){
                p.push_back({A[i], n});
            }
        }
        
        return p;
    }

int main(){

    int A[] = {1, 2, 4, 5, 7};
    int B[] = {5, 6, 3, 4, 8};

   vector<pair<int,int> > ans =  allPairs( A, B, 5, 5, 9);

    for(auto it : ans){
        cout << it.first << " " << it.second << endl;
    }
  
 
    return 0;
}