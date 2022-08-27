class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sum = nums[0] + nums[1] + nums[2], temp = 0;
        for(int i=0; i<nums.size(); i++){
            int j = i+1,k = nums.size()-1;
            while(j<k){
                int temp= nums[i] + nums[j] + nums[k];
                if(abs(target-sum)>abs(target-temp)){
                    sum = temp; // To obtain minimum distance
                }
                if(target<temp){
                    k--;
                }else if(target>temp){
                    j++;
                }else{
                    return temp;
                }
            }
        }
        return sum; // This indicates that it will return nearest integer to target 
    }
};