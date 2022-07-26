class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=-1;
        int num2=-1;
        int count1=0;
        int count2=0;
        int size=nums.size();
        
        for(int val : nums){
            if(num1==val) count1+=1;
            else if(num2==val) count2+=1;
            else if(count1==0){
                num1=val;
                count1+=1;
            }
            else if(count2==0){
                num2=val;
                count2+=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        vector<int>ans;
            count1=count2=0;
        for (int i=0; i<size; i++){
            if(nums[i]==num1) count1++;
            else if(nums[i]==num2) count2++;
        }
        if(count1>size/3) ans.push_back(num1);
        if(count2>size/3) ans.push_back(num2);
        return ans;
        }
    
};