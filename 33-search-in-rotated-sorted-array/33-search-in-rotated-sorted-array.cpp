class Solution {
public:
    int solve(vector<int> nums){
        int start=0;
        int end=nums.size()-1;
        int n=nums.size();
        while(start<=end){
            int mid= start+(end-start)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            
            if(nums[mid]<=nums[next] && nums[mid]<=nums[prev]){
                return mid;
            }else if(nums[mid]<nums[end]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return -1;
    }
    
    int find(vector<int>nums, int start, int end, int target){
        while(start<=end){
            int mid= start+(end-start)/2;
            
            if(nums[mid]==target){
                return mid;
            }else if(target<nums[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        int indx= solve(nums);
        
       int a= find(nums, 0, indx-1, target);
       int b= find(nums, indx, nums.size()-1, target);
        
        return (a!=-1)?a:b; 
        
    }
};