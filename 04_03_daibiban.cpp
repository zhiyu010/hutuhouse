#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long double a , b , y;
    int x ;
    cin >> a >> b ;
    while((x > log(b)/log(a)||log(b)/log(a) >= x + 1)){
        x++;
    }
    cout << x;
    return 0;
}