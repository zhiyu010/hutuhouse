#include <iostream>
using namespace std;
class Point{
    private:
    double x,y;
    public:
    Point(double c,double d);
    void Set(double a,double b){
        x=a;y=b;
    };
    void Show(){
        cout << "X为" << x << "Y为" << endl;
    };
};
Point::Point(double c,double d):x(c),y(d){}

class Rectangle:public Point{
    private:
    double changdu,kuandu,mianji,zhouchang,x,y;
    public:
    Rectangle(double c,double d,double e,double f);
    void Jisuan(){
        mianji = changdu*kuandu;
        zhouchang = changdu*2 + kuandu*2;
    }
    void Show(){
        cout << "周长为" <<zhouchang <<"面积为"<<mianji;
    }
};

Rectangle::Rectangle(double c,double d,double e,double f):Point(c,d){
    changdu = e;
    kuandu = f;
}

int main (){
    Point p(1,2);
    Rectangle r(1,2,3,4);
    r.Jisuan();
    r.Show();
    return 0;
}