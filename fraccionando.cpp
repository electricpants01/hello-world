#include <bits/stdc++.h>

using namespace std;

int main(){
    int b[8] = {200,100,50,20,10,5,2,1};
    int resul[8] = {0,0,0,0,0,0,0,0};
    int monto;
    cin>>monto;
    int i = 0;
    while( monto != 0){
        if( (monto - b[i]) >= 0){
            monto = monto - b[i];
            resul[i] +=1;
        }else{
            i++;
        }
    }
    cout<<"billete(s) de 200 = "<<resul[0]<<endl;
    cout<<"billete(s) de 100 = "<<resul[1]<<endl;
    cout<<"billete(s) de  50 = "<<resul[2]<<endl;
    cout<<"billete(s) de  20 = "<<resul[3]<<endl;
    cout<<"billete(s) de  10 = "<<resul[4]<<endl;
    cout<<"moneda(s)  de   5 = "<<resul[5]<<endl;
    cout<<"moneda(s)  de   2 = "<<resul[6]<<endl;
    cout<<"moneda(s)  de   1 = "<<resul[7]<<endl;
}
