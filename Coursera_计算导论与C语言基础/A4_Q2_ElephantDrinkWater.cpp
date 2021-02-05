/*
编程题＃2：大象喝水
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

输入
输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。

输出
输出一行，包含一个整数，表示大象至少要喝水的桶数。

样例输入
第一组
23 11
第二组
1 1

样例输出
第一组
3
第二组
6367

提示
如果一个圆桶的深为h厘米，底面半径为r厘米，那么它最多能装Pi * r * r * h立方厘米的水。(设Pi=3.14159) 

1升 = 1000毫升

1毫升 = 1 立方厘米

来源
计算概论化学学院期末考试
提示
如果一个圆桶的深为h厘米，底面半径为r厘米，那么它最多能装Pi * r * r * h立方厘米的水。(设Pi=3.14159) 

1升 = 1000毫升

1毫升 = 1 立方厘米
*/
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    int water = 20, h, r;
    cin >> h >> r;
    float cap;
    int res;
    cap = h * 3.14159 * r * r / 1000;
    res = ceil(water / cap);
    cout << res << endl;
    return 0;
}