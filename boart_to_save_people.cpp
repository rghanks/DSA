#include<iostream>
#include<vector>
using namespace std;


 int numRescueBoats(vector<int>& people, int limit) {
        
        int start = 0;
        int end = people.size() - 1;
        int boat = 0;
                
        while( start <= end){

            if((people[start]+people[end]) <= limit){
                start++;
                end--;
                boat++;
            }else{
                end--;
                boat++;
            }


        }

        return boat;
    }

    int main(){

        vector<int> people = {3,5,3,4};
        int limit = 5;
        int res = numRescueBoats(people, limit);

        cout << "Total boat required is : " << res << endl;

        return 0;
    }