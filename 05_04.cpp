#include <iostream>
using namespace std;
class Students{
    private:
    string name,number,clases;
    int fenshu;
    public:
    Students(string a,string b,string c,int d){
        name = a;number = b;clases = c;fenshu = d;
    }
    void Show(){
        cout << "姓名：" << name <<endl<< "学号：" << number <<endl<< "班级" << clases <<endl<< "分数为";
        if (fenshu < 60 ){cout << "D" <<endl;}
        if (fenshu >=60 && fenshu < 70){cout << "C" <<endl;}
        if (fenshu >=70 && fenshu < 80){cout << "B" <<endl;}
        if (fenshu >=80 && fenshu < 100){cout << "A" <<endl;}
    }
};

int main (){
    string name,number,clases;
    int fenshu;
    cout << "请输入你的姓名" << endl;
    cin >> name;
    cout << "请输入你的学号" << endl;
    cin >> number;
    cout << "请输入你的班级" << endl;
    cin >> clases;
    cout << "请输入你的分数" << endl;
    cin >> fenshu;
    Students s(name,number,clases,fenshu);
    s.Show();
    return 0;
}