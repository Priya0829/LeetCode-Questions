//https://leetcode.com/problems/string-compression-iii/editorial/?envType=daily-question&envId=2024-11-04

class Solution {
public:
    string compressedString(string word) {
        int n = word.length();
        int i = 0;
        string comp = "";
        
        while(i<n){
            char curr = word[i];
            int cnt = 0;
            while(word[i] == curr && cnt<9 && i<n){
                cnt++;
                i++;
            }
            comp += to_string(cnt);
            comp += curr;
        }

        return comp;
    }
};
