class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char , int> mps;
        unordered_map<char , int> mpt;
        for(int i = 0 ; i < s.size() ; i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        for(int i = 0 ; i < mps.size() ; i++){
            if(mps[s[i]] != mpt[s[i]] ){
                return false;
            }
        }


        return true;
    }
};