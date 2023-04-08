#include<iostream>
using namespace std;

 bool isValidBST(TreeNode* root) {
        
        while(root != NULL){
            if(root->left > root || root->right < root ){
                return false;
            }
        }

        return true;

    }

int main(){

    return 0; 
}