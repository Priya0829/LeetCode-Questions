//https://leetcode.com/problems/find-if-array-can-be-sorted/description/?envType=daily-question&envId=2024-11-06

class Solution {
public:
    int set_bits(int num){
        int cnt = 0;
        for(int i = 0 ; i<31;i++){
            if((num>>i & 1) == 1) cnt++;
        }
        return cnt;
    }
    
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1;
        int i = 0;
        int prev_greatest = INT_MIN;
        while(i<n){
            int curr_bits = set_bits(nums[i]);
            int curr_greatest = nums[i];
            int curr_smallest = nums[i];
            while(i<n && curr_bits == set_bits(nums[i])){
                curr_greatest = max(curr_greatest, nums[i]);
                curr_smallest = min(curr_smallest, nums[i]);
                i++;
            }
            if(prev_greatest > curr_smallest) return false;
            prev_greatest = curr_greatest;
        }
        return true;
    }
};
