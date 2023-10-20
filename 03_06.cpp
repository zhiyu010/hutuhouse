#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "请输入 a, b, c"<< endl;
    cin >> a >> b >> c ;
    if(a==0)
    {
        if(b==0)
        {
            cout << "函数无解";
        }
        else
        {
            cout << "函数有一个解";
        }   
    }
    else if(a!=0 ) 
    {
        if(b*b-4*a*c>0)
        {
            cout << "函数有两个解";
        }
        else if(b*b-4*a*c<0)
        {
            cout << "函数无解";
        }
        else
        {
            cout << "函数有一个解";
        }


    }
return 0;
}


