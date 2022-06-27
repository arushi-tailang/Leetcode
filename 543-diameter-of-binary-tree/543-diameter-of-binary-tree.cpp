/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int maxi = INT_MIN;
        height(root, maxi);
        return maxi;
    }
        
         
        int height(TreeNode* node, int &maxi){
            if(!node) return 0;
            
            int lh = height(node->left, maxi);
            int rh = height(node->right, maxi);
            maxi= max(maxi, (lh+rh));
            return 1+max(lh,rh);
        
        
    }
};


//      1
//     / \
//    2   3
//   / \
//  4   5

// int maxi = 3;

// 1+ max(lh+rh);

// 4-> 1+max(0,0) = 1+0 = 1;

// 5-> 1+max(0,0) = 1+0 = 1;

// 2-> 1+max(1,1) = 1+1 = 2;

// 3-> 1+max(0,0) = 1+0 = 1;

// 1-> 1+max(2,1) = 1+2 = 3;
   