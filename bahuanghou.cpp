#include<iostream>
using namespace std;
static int G[8];
bool panduan(int x){
    int y = 0;
    while(y < x){
        if(G[y]!=G[x]&&abs(y-x)!=abs(G[y]-G[x])){
            y++;
        }
        else{
            return false;
        }
        return true;
        }
    }
void fangzhi(int z){
    bool w = panduan(z);
    for (int i;i<8;i++){
        G[z]++;
        if(z<=7){
            fangzhi(z+1);
        }
        else{
            int e=0;
            for(int q;q<8;q++){
                if(G[q]<8) e++;
            }
            if (e==8) {
                for(int b=0;b<8;b++)
                    {       
                        cout << G[b] << endl;
                    }
            }
            }

        }
}


int main (){
    fangzhi(0);
}