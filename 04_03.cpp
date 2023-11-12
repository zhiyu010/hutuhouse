#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long double a , b , y;
    int x ;
    cin >> a >> b ;
    x=log(b)/log(a);
    x=float(x);
    cout << x;
    return 0;
}