class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            int l = i+1 , r = nums.size() -1;

            while(r > l){
                if(nums[i] + nums[l] + nums[r] == 0){
                    vector<int> triplet  = {nums[i] , nums[l] , nums[r]};
                    ans.push_back(triplet);
                    while(r > l && triplet[1] == nums[l]) l++;
                    while(r > l && triplet[2] == nums[r]) r--;
                }
                else if(nums[i] + nums[l] + nums[r] > 0){
                    r--;
                }
                else{
                    l++;
                }
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
};