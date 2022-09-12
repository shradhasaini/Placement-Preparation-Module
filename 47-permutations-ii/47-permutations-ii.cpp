class Solution {
public:
     vector<vector<int>>  ans;
    void helper(vector<int> &nums,int i,int n){
        if(i==n-1){
            ans.push_back(nums);
            return;
        }
        if(i>n){
            return;
        }
        int freq[22]={0};
        for(int j=i;j<n;j++){
            if(freq[nums[j]+10]==0){
                
            swap(nums[i],nums[j]);
            helper(nums,i+1,n);
            swap(nums[i],nums[j]);
            }
            freq[nums[j]+10]++;
        }
        
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        helper(nums,i,n);
        return ans;
        
        
    }
};