int lengthOfLongestSubstring(string s) {
        vector<int> chars(128);
        int left = 0, right = 0, res = 0;
        while (right < s.length()) {
            char r = s[right];
            chars[r]++;
            while (chars[r] > 1) {
                char l = s[left];
                chars[l]--;
                left++;
            }
            res = max(res, right - left + 1);
            right++;
        }
        return res;
}
int main() {
    string s = "Hello";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}