
// Approach 1 --> Sort and Compare   Time --> O(NlogN)   Space -->O(1)

// Approach 2
//Time --> O(N)         Space --> O(N)
// check for left neighbour first , if no left neighbour that can be part of longest sequence
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> st;
        for(int num : nums){
            st.insert(num);
        }
        for(int x: st){
            int temp = x;
            int cnt = 1;
            if(!st.count(temp -1)){
                while(st.count(temp+1)){
                cnt++;
                temp++;
            }}
            ans = max(cnt , ans);
        }
        return ans;
    }
};