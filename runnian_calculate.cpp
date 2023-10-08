#include<iostream>
using namespace std;
int main()
{
    int a,c,d,e;
    bool b;
    cin>>a;
    c=a%100;
    if  (c==0)
    {
        d=a/100%4;
        if (d==0)
            cout<<"是闰年";
        else
            cout<<"不是闰年";
    }
    else
    {
        e=a%4;
        if(e==0){
            cout<<"是闰年";}
        else{
            cout<<"不是闰年";}
    }
    return 0;
}