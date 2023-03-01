#include<iostream>
#include<unordered_map>
using namespace std;


string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,int>m1;
    unordered_map<int,int>m2;
    
    for(int i=0; i<n; i++){
        m1[a1[i]]++;
    }
    
    for(int i=0; i<m; i++){
        m2[a2[i]]++;
    }
    
   for(auto i : m1){
      cout << i.first << " => " << i.second << endl;
   }

    for(auto i:m2){
        if(m1.find(i.first) != m1.end()){
            if(i.second > m1[i.first]){
                return "No";
            }
        }else{
            return "No";
        }
    }
    
    return "Yes";
}

int main(){

     int a1[7] = {1, 2, 3, 4, 5, 6, 6};
     int a2[3] = {1, 2, 4};
     cout <<  isSubset(a1,a2,7,3) << endl;

    return 0;
}