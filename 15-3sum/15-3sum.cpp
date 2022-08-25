class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n - 2; i++)
        {
            // As sorted
            if(nums[i] > 0)
                break;
            
            // Taking care of the repeats
            if(i > 0 && nums[i - 1] == nums[i])
                continue;
            
            // two pointers
            int front = i + 1;
            int back = n - 1;
            while(front < back)
            {
                int sum = nums[i] + nums[front] + nums[back];
             
                if(sum > 0)
                    back -= 1;
                else if(sum < 0)
                    front += 1;
                else
                {
                    // Found match
                    results.push_back({nums[i], nums[front], nums[back]});
                    
                    // Taking care of the duplicates
                    while(front < back && nums[front + 1] == nums[front])
                    {
                        front += 1;
                    }
                    while(front < back && nums[back - 1] == nums[back])
                    {
                        back -= 1;
                    }
                    
                    // Point to the element
                    front += 1;
                    back -= 1;
                }
            }
        }
        
        return results;
    }
};