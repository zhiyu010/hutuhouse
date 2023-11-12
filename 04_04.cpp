#include<iostream>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int b = a.size();
    for(int z;z<b;z++){
        if(a[z]>='a'&&a[z]<='z'){
            a[z]=a[z]-32;
        }
        else if(a[z]>='A'&&a[z]<='Z'){
            a[z]=a[z]+32;
        }
        cout << a[z];
    }
    return 0;
}