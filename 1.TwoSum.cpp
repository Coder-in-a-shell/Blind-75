
// using map to store indexes of array elements
// TC - O(N)
// SC- O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        vector<int> ans(2 , 0);
        for(int i = 0 ; i < nums.size() ; i++){
            int comp = target - nums[i];
            if(!(mp.find(comp) == mp.end())){
                ans[0] = mp[comp];
                ans[1] = i;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};