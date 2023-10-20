#include<iostream>
using namespace std;
int main(){
    int a;
    int i = 0;
    cout << "请输入需要反向的数字";
    cin >> a;
    do{
        cout << a%10;
        a = a / 10;
        i++;
    }while (a!=0);
cout << endl << i;
return 0;
}