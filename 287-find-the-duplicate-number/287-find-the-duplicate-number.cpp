class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          int slow= nums[0];
       int fast = nums[0];

       do {
           slow = nums[slow]; //moving by index of 1
           fast = nums[nums[fast]]; //moving by the index of 2 
       } while (slow != fast);

       fast = nums[0];

       while (slow!=fast){
          slow = nums[slow]; //moving with the index of 1
          fast= nums[fast]; //moving with the index of 1
       }

       return slow;

    }
};