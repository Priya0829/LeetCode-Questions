//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/editorial/?envType=daily-question&envId=2024-12-18
//Monotonic stack
//Imagine we are processing prices from left to right. At each step, we need to determine if the current price can serve as a discount for any previous prices. The stack helps us keep track of those previous prices that haven't found their discount yet.


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        for(int i = 0;i<n;i++) ans[i] = prices[i];
        stack<pair<int, int>> st;
        for(int i = 0;i<n;i++){
            int curr = prices[i];
            while(!st.empty() && st.top().first >= curr){
                ans[st.top().second] = prices[st.top().second] - curr;
                st.pop();
            }
            st.push({prices[i], i});
        }
        return ans;
    }
};
