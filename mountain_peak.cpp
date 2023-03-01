#include<iostream>
#include<vector>
using namespace std;

int higest_mountain(vector<int> a){

    int n = a.size();
    int largest = 0;

    for(int i=1; i <= n-2;){

        // check wether a[i] is peak or not
        if(a[i] > a[i-1] && a[i] > a[i+1]){
            // do some work
            int cnt = 1;
            int j = i;
            // cnt backward (left)

            while (j >= 1 && a[j]>a[j-1]){
                j--;
                cnt++;
            }           

            // cnt forwards ( right)
            while(i <= n-2 && a[i] > a[i+1]){
                i++;
                cnt++;
            }

            largest = max(largest, cnt); 

        }else{
            i++;
        }

    }

    return largest;

}

int main(){

    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

    cout << higest_mountain(arr);

    return 0;
}