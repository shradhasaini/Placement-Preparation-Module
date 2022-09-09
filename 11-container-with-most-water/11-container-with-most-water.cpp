class Solution {
public:
	int maxArea(vector<int>& height) {
		int ans = 0,n = height.size();
		int i=0,j=n-1;
		ans = min(height[i],height[j])*(j-i);
		while(i<j+1){
			ans = max(ans,min(height[i],height[j])*(j-i));
			if(height[i]>height[j]){
				j-=1;
			}
			else{
				i+=1;
			}
		}
		return ans;
	}
};