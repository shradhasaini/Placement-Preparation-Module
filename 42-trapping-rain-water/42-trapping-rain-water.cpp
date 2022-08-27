class Solution {
public:

int trap(vector<int>& height) {
   
    int ans = 0;
    int n = height.size();
    int lh = height[0];
    int rh[height.size()];
    int m = 0;
    rh[height.size()-1]=height[height.size()-1];
    for(int i=height.size()-2; i>=0; i--)
    {
        rh[i] = max(height[i], rh[i+1]);
    }
    for(int i=1; i<(n-1); i++)
    {
        lh = max(lh, height[i]);
        int h = min(lh, rh[i]);
        
        ans += h-height[i];
    }
    return ans;
}
};