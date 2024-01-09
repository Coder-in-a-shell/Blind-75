class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() -1;
        while(r > l){
            s[l] = (char)tolower(s[l]);
            s[r] = (char)tolower(s[r]);
            
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};