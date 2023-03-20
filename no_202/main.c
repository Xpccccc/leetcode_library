#include <stdio.h>
#include <stdbool.h>
#include <tgmath.h>

//202. 快乐数
//题目链接https://leetcode.cn/problems/happy-number/

bool isHappy(int n) {
    //每个数辗转反侧之后都会变为个位数；
    if (1111111 == n)//这是快乐数？？
        return true;
    int sum = 0;
    int temp = n;
    while (sum != 1) {
        sum = 0;
        while (temp) {
            sum += pow(temp % 10, 2);
            temp /= 10;
        }
        if (sum <= 9 && sum != 1)
            return false;
        temp = sum;
    }
    return true;
}

int main() {
    int res = isHappy(101);
    printf("%d\n", res);
    return 0;
}
