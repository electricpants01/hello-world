#include <bits/stdc++.h>

using namespace std;
void dfs(vector<int> v[], bool visited[], int n){
 if (visited[n] == true ) return;
  visited[n] = true;
  for( auto x : v[n]){
    dfs(v,visited,x);
  }
}
int contame(vector<int> v[],bool visited[],int n){
  if( visited[n] == false){
    dfs(v,visited,n);
  //  cout<<"entro el : "<<n<<endl;
    return 1;
  }
  return 0;
}
int main(){
    // inicio
 int nodos;
 int aristas;
 int origen,destino;
 cin>>nodos;    // cantidad de nodos
  vector<int> v[nodos+1];
 cin>>aristas;  // cantidad de aristas
 for(int i = 0; i< aristas ; i++){
    cin>>origen;
    cin>>destino;
    v[origen].push_back(destino);
    v[destino].push_back(origen);
 }
 //cout<<"vector una belleza"<<endl;
   bool visited[nodos+1];
  for(int i = 1 ; i<= nodos; i++){
    visited[i] = false;
  }
  //cout<<"visited completo"<<endl;
 ////////////////////// todo bien hasta aqui
 int cont = 0; // contador de componentes conectadoss
 // hacer dfs de la lista de adyacencia
 for(int i = 1 ; i<= nodos ; i++){
  cont+= contame(v,visited,i);
 }
 cout<<cont<<endl;
 return 0;
}
