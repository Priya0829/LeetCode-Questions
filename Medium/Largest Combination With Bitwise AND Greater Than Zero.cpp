//https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/description/?envType=daily-question&envId=2024-11-07

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        int ans = 0;
        for(int i = 0;i<31;i++){
            int cnt = 0;
            for(int j = 0;j<n;j++){
                if(candidates[j]>>i & 1) cnt++;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
