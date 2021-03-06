/*
编程题＃2：能被3，5，7整除的数
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
输入一个整数，判断它能否被3，5，7整除，并输出以下信息：

1、能同时被3，5，7整除（直接输出3 5 7，每个数中间一个空格）；

2、能被其中两个数整除（输出两个数，小的在前，大的在后。例如：3 5或者 3 7或者5 7,中间用空格分隔）

3、能被其中一个数整除（输出这个除数）

4、不能被任何数整除；（输出小写字符'n',不包括单引号)

输入
一个数字

输出
一行数字,从小到大排列,包含3,5,7中为该输入的除数的数字,数字中间用空格隔开

样例输入
第一组
0
第二组
5
第三组
15
第四组
105
第五组
1

样例输出
第一组
3 5 7
第二组
5
第三组
3 5
第四组
3 5 7
第五组
n

提示
因为有多组测试数据,程序通过下面方式读入n

int n;
while(cin>>n)
{
  // 你的代码
  cout << "你的结果" << endl;
}

// good luck:)
*/
#include <iostream>
using namespace std;
int main() {
    int num = 0;
    bool flag = false;
    while(cin >> num)
    {
        if (num % 3 == 0)
        {
            cout << "3 ";
            flag = true;
        }
        if (num % 5 == 0)
        {
            cout << "5 ";
            flag = true;
        }
        if (num % 7 == 0)
        {
            cout << "7";
            flag = true;
        }
        if (flag == false)
        {
            cout << "n";
        }
        cout << endl;
        flag = false;
    }
    return 0;
}