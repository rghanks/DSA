#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

 int lastStoneWeight(vector<int>& stones) {        

       priority_queue<int, vector<int>> pq;
        for(int i=0;i<stones.size();i++) {
            pq.push(stones[i]);
        }
        int x;int y;
        while(pq.size()>1) {
            y = pq.top(); pq.pop();
            x = pq.top(); pq.pop();
            if(y!=x) pq.push(y-x);
        }
        if(!pq.empty()) return pq.top();
        else return 0;       
      
    }

int main(){

    vector<int> v = {7,6,7,6,9};

    cout << lastStoneWeight(v) << endl;

    return 0;
}