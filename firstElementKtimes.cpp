#include<iostream>
using namespace std;

   int firstElementKTime(int a[], int n, int k)
    {
        int m=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                if(a[i] == a[j]){
                    m++;
                }
            }
             if(m==k){
                        return a[i];
                    }
        }
    }

    int main(){

      int  A[] = {1, 7, 4, 3, 4, 8, 7};

        cout <<   firstElementKTime(A, 7, 2) << endl;

      return 0;

    }