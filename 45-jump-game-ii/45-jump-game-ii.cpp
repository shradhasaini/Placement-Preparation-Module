class Solution {
public:
int jump(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    
    vector<int> dp(nums.size(), -1);
    dp[nums.size() - 1] = 0;
    
    for(int i = nums.size() - 2; i >= 0; i--)
    {
        if(nums[i] == 0) continue;
        
        int min = INT_MAX;
        
        for(int j = 1; j <= nums[i] && j + i < nums.size(); j++)
        {
            if(dp[j + i] != -1 && dp[j + i] < min) min = dp[j + i];
        }
        
        if(min != INT_MAX) dp[i] = min + 1;
    }
    
    return dp[0];
    
}
};