/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        return makeBST( head, NULL);
    }
    TreeNode* makeBST(ListNode* head, ListNode* tail){
        //base case
        if(head == tail) {
            return NULL;
        }        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != tail && fast->next != tail){
            slow= slow->next;
            fast= fast->next->next;
        }
        
        TreeNode* root = new TreeNode(slow->val);
        root->left = makeBST(head, slow);
        root->right= makeBST(slow->next, tail);
        return root;
        
    }


};
//                   ||
// -10, -3, 0, 5, 9; null
//          |

//           0
//       -3     5
//    -10          9
