
// https://leetcode.cn/problems/maximum-length-of-repeated-subarray/
// 718. 最长重复子数组

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        // dp[i][j] --
        // nums1以i结尾的子数组和nums2以j结尾的子数组的最长公共子数组
        int m = nums1.size(), n = nums2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
        int ret = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (nums1[i - 1] == nums2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                ret = max(ret, dp[i][j]);
            }
        }
        return ret;
    }
};