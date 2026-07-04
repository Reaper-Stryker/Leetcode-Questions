class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(128, 0);
        for(char ch : s){
            freq[ch]++;
        }
        int ans = 0;
        for(int x : freq){
            ans += (x / 2) * 2;
        }
        if(ans < s.size()) ans++;
        return ans;
    }
};