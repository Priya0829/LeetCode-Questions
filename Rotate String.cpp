//https://leetcode.com/problems/rotate-string/?envType=daily-question&envId=2024-11-03

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s == goal) return true;
            s = s.substr(1, n-1) + s[0];
        }
        return false;
        
    }
};
