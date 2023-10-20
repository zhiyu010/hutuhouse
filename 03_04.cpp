#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i = 0;
    int o;
    cout << setw(10) << "*" << endl;
    while (i<9)
    {
        i++;
        cout << setw(10 - i)<<"*";
        for(o=1;o <= 2*i-1;o++){
            cout<<" ";
        }
        cout << "*" << endl;

    }
    return 0;

}