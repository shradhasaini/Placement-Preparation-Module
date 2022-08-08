class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
     sort ( nums.begin( ) , nums.end ( ) ) ;
      int j = nums.size( ) -1 ;
      for ( int i = 0 ; i < k ; i ++ ) {
      j = j -1 ;
}
     return nums[ j +1 ] ;

    }
};