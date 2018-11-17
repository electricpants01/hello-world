#include <bits/stdc++.h>

using namespace std;

int contamepalomo(string cad){
    int cont = 0;
   size_t encontrado = cad.find("palomillo");
     while( encontrado != string::npos){
        if(cad[cad.find("palomillo") + 9] == ' ' || cad[cad.find("palomillo")-1] == ' '){
            cont++;
        }
        encontrado = cad.find("palomillo",encontrado+1);
     }
 return cont;
}

int main(){
 string cad;
 int cont = 0;
 for(int i = 0 ; i<3 ; i++){
    getline(cin,cad);
    cont+= contamepalomo(cad);
 }
 cout<<cont<<endl;
 return 0;
}
