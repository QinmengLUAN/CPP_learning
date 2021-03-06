/*
编程题＃4：最大奇数与最小偶数之差的绝对值
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。 

设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值

输入
输入为一行，6个正整数,且6个正整数都小于100

输入保证这6个数中至少存在一个奇数和一个偶数

输出
输出为一行，输出最大的奇数与最小的偶数之差的绝对值

样例输入
第一组
1 2 3 4 5 6
第二组
1 6 3 8 5 10

样例输出
第一组
3
第二组
1
*/
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 6;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    int maxOdd = INT_MIN;
    int minEven = INT_MAX;
    
    for (int j = 0; j < n; j++) {
        if (nums[j]%2 == 1) {
            if (maxOdd < nums[j]) {
                maxOdd = nums[j];
            }
        }
        else {
            if (minEven > nums[j]) {
                minEven = nums[j];
            }
        }
    }


    if (maxOdd > minEven)
        cout << maxOdd - minEven << endl;
    else
        cout << minEven - maxOdd << endl;

    return 0;

}