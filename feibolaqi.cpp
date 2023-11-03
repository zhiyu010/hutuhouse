#include<iostream>
using namespace std;
int jisuan(int n)
{
    int a;
    switch (n)
    {
    case 1:
        a = 1;
        break ;
    case 2:
        a = 1;
        break ;
    default:
        a = jisuan(n-1) + jisuan(n-2);
        break;
    }
    return a;
}
int main()
{
    int n,a;
    int b;
    cin >> b;
    int c=b;
    int C[c];
    for(; b!=0 ; --b)
    {
        cin >> n;
        a = jisuan (n);
        C[b] = a;
    }
    for(; c!=0 ; --c)
    {
        cout << C[c] << endl;
    }
    return 0;
}