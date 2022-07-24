 int b_searchLeft(vector<int>& nums,int target,int start,int end)
{
    int result=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(nums[mid]==target)
        {
            result=mid;
            end=mid-1;
        }
        else if(nums[mid]>target)
            end=mid-1;
        else
            start=mid+1;
    }
    return result;
}
int b_searchRight(vector<int>& nums,int target,int start,int end)
{
    int result=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(nums[mid]==target)
        {
            result=mid;
            start=mid+1;
        }
        else if(nums[mid]>target)
            end=mid-1;
        else
            start=mid+1;
    }
    return result;
}
class Solution {
public:

vector<int> searchRange(vector<int>& nums, int target) {
    int leftVal=b_searchLeft(nums,target,0,nums.size()-1);
    int rightVal=b_searchRight(nums,target,0,nums.size()-1);
    return {leftVal,rightVal};
}
};