class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> arr;
        
        for(int i = 0 ; i < nums.size() ; i += 2){
            for( int j = nums[i] ; j > 0 ; j--){
                arr.push_back(nums[i+1]);
            }
        }
      return arr;
    }
};