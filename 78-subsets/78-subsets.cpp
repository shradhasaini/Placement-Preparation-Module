class Solution {
public:
    vector<vector<int>> ans;
    
    void formSubset(vector<int>& nums ,int i , int n , vector<int>& temp){
        if(i == n){
            ans.push_back(temp);
            return;
        }else{
            temp.push_back(nums[i]);
            //pick
            formSubset(nums , i + 1 , n , temp);
            //not pick
            temp.pop_back();
            formSubset(nums , i + 1 , n , temp);
            return;
        }
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        formSubset(nums , 0 , nums.size(),temp);
        return ans;
    }
};