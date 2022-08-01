class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        if(nums.empty()) return ans;
        
        
        for(int i=0; i<nums.size(); i++){
            long long n1= (long long)target - (long long)nums[i];
            
            for(int j=i+1; j<nums.size(); j++){
                long long n2 = (long long)n1 - (long long)nums[j];
                
                int l=j+1;
                int r=nums.size()-1;
                
                while(l<r){
                    int t = nums[l]+nums[r];
                    
                    if(t<n2) l++;
                    else if(t>n2) r--;
                    else {
                        vector<int> v(4, 0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[l];
                        v[3]=nums[r];
                        ans.push_back(v);
                        
                    while(l<r && v[2]==nums[l]) ++l;
                    while(l<r && v[3]==nums[r]) --r;
                    }
                    
                }
                while(j+1<nums.size() && nums[j]==nums[j+1]) ++j;
            }
            while(i+1<nums.size() && nums[i]==nums[i+1]) ++i;
        }
        return ans;
        
    }
};