//https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/?envType=daily-question&envId=2024-11-05

class Solution {
public:
    int minChanges(string s) {
        int n = s.length();
        int ans = 0;
        int i = 0;
        bool flag = 0;
        int cnt = 0;
        while(i<n){
            char curr = s[i];
            if(flag == 0) cnt = 0;
            else cnt = 1;
            flag = 0;
            while(curr == s[i] && i<n){
                i++;
                cnt++;
            }
            if(cnt%2 != 0) {
                flag = 1;
                ans++;
            }
        }
        return ans;
    }
};
