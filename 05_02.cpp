#include <iostream>
using namespace std;
class Triangle{
    private:
    double changdu1,changdu2,changdu3;
    public:
    Triangle(double x,double y,double z);
    void Panduan(){
        if (changdu1 != changdu2 && changdu2!= changdu3 && changdu1 != changdu3){
            cout << "不等边三角形";
        }
        else if (changdu1 ==changdu2 &&changdu2==changdu3){
            cout << "等边三角形";
        }
        else{
            cout << "等腰三角形";
        }
    };
    
};

Triangle::Triangle(double x,double y,double z):changdu1(x),changdu2(y),changdu3(z){}

int main (){
    double x ,y,z;
    cin >> x>>y>>z;
    Triangle t(x,y,z);
    t .Panduan();
    return 0;
}