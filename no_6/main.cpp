
// https://leetcode.cn/problems/zigzag-conversion/
// 6. Z 字形变换

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        // 找规律
        int n = s.size();
        int d = 2 * numRows - 2;
        string ret;
        // 处理第一行
        for (int i = 0; i < n; i += d) {
            ret += s[i];
        }
        // 处理中间numRows-2行
        for (int k = 1; k < numRows - 1; ++k) {
            for (int i = k, j = d - k; i < n || j < n; i += d, j += d) {
                if (i < n)
                    ret += s[i];
                if (j < n)
                    ret += s[j];
            }
        }
        // 处理最后一行
        for (int i = numRows - 1; i < n; i += d) {
            ret += s[i];
        }
        return ret;
    }
};