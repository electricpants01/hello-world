#include <bits/stdc++.h>
// los vectores se pasan por sus punteros
using namespace std;
void mostrar( int a[]){
 for(int i = 0 ; i<5 ; i++){
    cout<<a[i]<<" ";
 }
}
void cambiararr(int a[]){
 a[3] = 103;
}
int main(){
 int arreglo[5];
 for(int i = 0 ; i< 5 ; i++){
    arreglo[i] = 0;
 }
 cambiararr(arreglo);
 mostrar(arreglo);
}
