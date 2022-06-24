class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        
        if(intervals.size()==0) return mergedIntervals;
        
        sort(intervals.begin(),intervals.end());
        vector<int>tempit=intervals[0];
        for(auto it:intervals){
         if(it[0]<=tempit[1]){
                tempit[1]=max(it[1],tempit[1]);
            }else{
                mergedIntervals.push_back(tempit);
                tempit=it;
            }
        }
        
        mergedIntervals.push_back(tempit);
        return mergedIntervals;
    }
};