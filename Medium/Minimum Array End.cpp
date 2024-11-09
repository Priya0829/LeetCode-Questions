//https://leetcode.com/problems/minimum-array-end/description/?envType=daily-question&envId=2024-11-09

class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        long long v = n-1;
        long long x_num = x;
        int unset_x_bit = 0;
        for(int i = 0;i<31;i++){
            long long v_bit = v>>i&1;
            while((x_num>>unset_x_bit & 1) == 1)unset_x_bit++;
            ans = ans | v_bit<<unset_x_bit;
            unset_x_bit++;
        }
        return ans;
    }
};
