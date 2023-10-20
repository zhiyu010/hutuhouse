#include <iostream>
using namespace std;
int main()
{
    int a , b;
    cout << "请输入比较的第一个数字" << endl;
    cin >> a;
    cout << "请输入比较的第二个数字" << endl;
    cin >> b;
    if(a > b){
        cout << "第一个数更大";
    }
    else if (a < b){
        cout << "第二个数更大";
    }
    else{
        cout <<"两个一样大";
    }
return 0;
}
