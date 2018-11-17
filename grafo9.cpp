#include <bits/stdc++.h>


using namespace std;
void mostrar(vector<int> v[]){
 for(int i = 0 ; i< 5; i++){
    for( auto x : v[i]){
        cout<<"origen "<<i<<" destino "<<x<<endl;
    }
 }
}
int main(){
 int nodos;
 int origen,destino;
 cin>>nodos;
 vector<int> v[nodos];
 for(int i = 0 ; i< 5 ;i++){
    cin>>origen;
    cin>>destino;
    v[origen].push_back(destino);
 }
 mostrar(v);
}
