class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size()==0) return 0;
        if (nums.size()==1 && nums[0]==val) return 0;
        int head=0;
        int tail=nums.size()-1;
        while (head <= tail){
            if (nums[head] == val) {
                swap(nums[head], nums[tail]); 
                tail--;
            }
            else {head++;}
        }
        return head;
    }
};