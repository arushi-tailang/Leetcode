class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
    vector<vector<int>>mergeIntervals;
        
        // [1,3],[2,6], [8,10], [9,10], [15,18], [16,17]
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> tempInterval= intervals[0]; // all intervals will be in temp intervals
        
        for (auto it: intervals){
            if(it[0]<=tempInterval[1]){
                tempInterval[1]=max(it[1],tempInterval[1]);
                
            }else{
                 mergeIntervals.push_back(tempInterval); 
                tempInterval=it;
            }
        }
        mergeIntervals.push_back(tempInterval);
    return mergeIntervals;
        
        
        
    }
};

