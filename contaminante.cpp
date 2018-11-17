#include <bits/stdc++.h>

using namespace std;

void sol(char *cad,int f,int c,int maxf,int maxc){
    cad[f*maxc+c] = 'T';
    // verificacion de arriba
    if( f-1 >= 0){
        if(cad[(f-1)*maxc+c] == 'A'){
            sol(cad,f-1,c,maxf,maxc);
        }
    }
    // verificacion de derecha
    if(c+1 < maxc){
        if(cad[f*maxc+c+1] == 'A'){
            sol(cad,f,c+1,maxf,maxc);
        }
    }
    // verificacion de abajo
    if(f+1<maxf){
        if( cad[(f+1)*maxc+c] == 'A'){
            sol(cad,f+1,c,maxf,maxc);
        }
    }
    //verificacion de izquierda
    if(c-1 >= 0){
        if( cad[f*maxc+c-1] == 'A'){
            sol(cad,f,c-1,maxf,maxc);
        }
    }
}
 void mostrar(char *cad,int f, int c){
  for(int i = 0; i< f; i++){
    for(int j= 0 ; j<c; j++){
        cout<<cad[i*c+j];
    }
    cout<<"\n";
  }
 }
int main(){
 int f,c;
 cin>>f;
 cin>>c;
 char dato;
 char matriz[f][c];
 for( int i = 0 ; i< f; i++){
    for( int j = 0 ; j < c; j++){
        cin>>dato;
        matriz[i][j] = dato;
    }
 }
 // recorremos la matriz
 for(int i = 0; i< f ; i++){
    for(int j = 0 ; j< c; j++){
        if( matriz[i][j] == 'T'){
            sol((char *)matriz,i,j,f,c);
        }
    }
 }
 mostrar((char *)matriz,f,c);
 return 0;
}
