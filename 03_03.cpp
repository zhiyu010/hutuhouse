#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "请输入一个数字" << endl;
    cin >> a;
    b = a / 7;
    switch (b)
    {
        case 1 : cout << "今天是周一";break;
        case 2 : cout << "今天是周二";break;
        case 3 : cout << "今天是周三";break;
        case 4 : cout << "今天是周四";break;
        case 5 : cout << "今天是周五";break;
        case 6 : cout << "今天是周六";break;
        case 7 : cout << "今天是周日";break;
    }
    return 0;
}