#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i = 0;
    int o,w;
    cout << "请输入需要的行数";
    cin >> w;
    cout << setw(w) << "*" << endl;
    while (i<w-1)
    {
        i++;
        cout << setw(w - i)<<"*";
        for(o=1;o <= 2*i-1;o++){
            cout<<" ";
        }
        cout << "*" << endl;

    }
    for (o=1;o <= 2*w;o++){
        cout<<"*";
    }
    return 0;

}