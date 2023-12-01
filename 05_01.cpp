#include <iostream>
using namespace std;
class Circle{
    public:
    Circle(double x);
    void Mianji(){
        mianji = 0.5*banjing*banjing*3.14;
    }
    void Zhouchang(){
        zhouchang = 2 * 3.14 * banjing ;
    }
    void Show(){
        cout << mianji <<" " << zhouchang << endl;
    }
    private:
    double banjing, mianji ,zhouchang;
};

Circle :: Circle(double x):banjing(x){}

int main(){
    Circle c(1.0);
    c .Zhouchang();
    c .Mianji();
    c .Show();
    return 0;
}