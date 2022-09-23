class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
      int ans = 0;
        
      int lowestSoFarInARR = INT_MAX;
      int ifSoldToday = 0;  
      for(int i = 0; i<prices.size();i++){
          
          if(lowestSoFarInARR>prices[i]){
              lowestSoFarInARR = prices[i];
          }
          ifSoldToday = prices[i]- lowestSoFarInARR;
          
          ans = max(ans,ifSoldToday);
      }
        
        return ans;
    }
};