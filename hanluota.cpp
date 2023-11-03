#include <iostream>
using namespace std;
void Move(string yuanweizhi,string mubiaoweizhi)
{
    cout << yuanweizhi << "->" << mubiaoweizhi << endl;
}
void zhenmove(int n,string yuanweizhi_1,string zhongjianweizhi,string mubiaoweizhi_1)
{
    if (n>1)
    {
        zhenmove(n-1,yuanweizhi_1,mubiaoweizhi_1,zhongjianweizhi);
        cout << n <<":";
        Move(yuanweizhi_1,mubiaoweizhi_1);
        zhenmove(n-1,zhongjianweizhi,yuanweizhi_1,mubiaoweizhi_1);
    }
    else if(n==1)
    {
        cout << 1 <<":";
        Move(yuanweizhi_1,mubiaoweizhi_1);
    }
}
int main()
{
    string A;
    string B;
    string C;
    int n;
    cin >> n;
    cin >> A;
    cin >> B;
    cin >> C;
    zhenmove(n,A,B,C);
}