
//using vector pair to sort by values of map
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int , int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        vector<pair<int , int>> vp;
        for(auto it: mp){
            vp.push_back({it.second , it.first});
        }
        
        sort(vp.rbegin() , vp.rend());
        
        for(int i = 0 ; i < k ; i++){
            cout<<vp[i].first<<vp[i].second<<endl;
            ans.push_back(vp[i].second);
        }

        return ans;
    }
};