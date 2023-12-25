
//using map to store all the anagrams corresponding to sorted anagram
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>> mp;
        vector<vector<string>> ans;
        vector<string> row;
        for(int i = 0 ; i < strs.size() ;i++){
            string s = strs[i];
            sort(s.begin() , s.end());
            mp[s].push_back(strs[i]);
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};