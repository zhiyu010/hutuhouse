#include<iostream>
using  namespace std;
int main()
{
    int a , b , c ,d ,e;
    a = 200;
    for(; a < 300 ;a++)
    {
        d=0;
        int b = sqrt(a);
        e=b;
        for(; b > 1 ;b--)
        {
            c = a % b ;
            if(c==0)
            {
                break;
            }
            else
            {
                d++;
            }
            if(d==e-1)
            {
            cout << a << endl;
            }
        }
    }
    return 0;
}