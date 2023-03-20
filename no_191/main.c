
//191. 位1的个数
//题目链接https://leetcode.cn/problems/number-of-1-bits/

int hammingWeight(uint32_t n) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (1 == ((n >> i) & 1))
            count++;
    }
    return count;
}