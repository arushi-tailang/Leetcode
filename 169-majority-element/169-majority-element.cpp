class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0;
       int el = 0;
        
        for(int val:nums){
        if(count==0) el=val;
        if(el==val){
            count+=1;
        }else
            count-=1;
    }
        return el;
    }
  
};






// c=1
    
//     el=2