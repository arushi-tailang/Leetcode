class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxPro=0;
        int n=prices.size();
        for(int i=0; i<n; i++){
            mini=min(mini,prices[i]);
            maxPro= max(maxPro,prices[i]-mini);
        }
       return maxPro;
    }
};

//[7,1,5,3,6,4]

// mini=1 
//     maxPro=5