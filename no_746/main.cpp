
// https://leetcode.cn/problems/min-cost-climbing-stairs/
// 746. 使用最小花费爬楼梯


class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);
        dp[n - 1] = cost[n - 1], dp[n - 2] = cost[n - 2];
        // 以i位置为起点
        for (int i = n - 3; i >= 0; --i) {
            dp[i] = min(dp[i + 1], dp[i + 2]) + cost[i];
        }
        return min(dp[0], dp[1]);
    }
};


//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        int n = cost.size();
//        vector<int> dp(n + 1);
//        dp[0] = dp[1] = 0;
//        // 以i位置为结尾
//        for (int i = 2; i <= n; ++i) {
//            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//        }
//        return dp[n];
//    }
//};