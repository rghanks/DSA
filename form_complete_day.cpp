#include<iostream>
#include<vector>
using namespace std;

int countCompleteDayPairs(vector<int>& hours) {

    vector< pair<int,int>> res;

        for(int i = 0; i < hours.size()-1; i++){

                for(int j = i+1; j < hours.size(); j++){

                        if((hours[i] + hours[j]) % 24 == 0){
                            res.push_back({ hours[i], hours[j] });
                        }

                }

        }
        
        for(int i = 0; i < res.size(); i++){
            cout << res[i].first << " " << res[i].second << endl;
        }

        return res.size();
        
    }

int main(){

    vector<int> h = { 72,48,24,3 };

    cout << "Total pair is : " << countCompleteDayPairs(h) << endl;

    return 0;
}