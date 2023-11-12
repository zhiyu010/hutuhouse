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
    int n,a,b;
    cin >> b;
    while(b>0){
    cin >> n;
    a = jisuan (n);
    cout << a << endl;
    b--;
}
 
}