/*
编程题＃4：找和为K的两个元素
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。

输入
第一行输入序列的长度n和k，用空格分开。

第二行输入序列中的n个整数，用空格分开。

输出
如果存在某两个元素的和为k，则输出yes，否则输出no。

样例输入
9 10
1 2 3 4 5 6 7 8 9

样例输出
yes
*/
#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    int nums[n];
    bool exist = 0;//利用bool标记是否存在
    for (int i=0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i=0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (nums[i] + nums[j] == k) {
                exist = 1;
                break;
            }
        }
    }
    if (exist == 1)
        cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}