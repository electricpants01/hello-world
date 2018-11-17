#include <bits/stdc++.h>

using namespace std;
int parenabierto(string cad, int n,int b){
    int len = cad.length();
    int i;
    for( i =  n;  i < b ; i++){
        if( cad[i] == '('){
            return i;
        }else if(cad[i] == ')' ){
            return -1;
        }
    }
    return i;
}
int parencerrado(string cad,int n, int a){
    int len = cad.length();
    int i;
    for( i = n; i > a ; i--){
        if( cad[i] == ')'){
            return i;
        }else if(cad[i] == '('){
            return -1;
        }
    }
    return i;
}
int main(){
    int n,a,b;
    int cont = 0;
    cin>>n;
    string cad;
    while(n--){
        cin>>cad;
        int len = cad.length();
        a= 0;
        b= len;
        for(int i = 0 ; i <= len/2;){
            a = parenabierto(cad,i,b);
            //cout<<"a es "<<a<<endl;
            b = parencerrado(cad,b-1,i);
            //cout<<"b es "<<b<<endl;
            if(a == -1 || b == -1){
                cout<<"incorrecto"<<endl;
                break;
            }
            i = a+1;
        }
        if(a != -1 && b != -1 ){
            cout<<"correcto"<<endl;
        }
    }
    return 0;
}
