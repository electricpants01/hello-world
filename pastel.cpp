#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int  n;
  long long int p,q;
  long long int resul =0;
 cin>>n;
 while(n--){
    cin>>p;
    cin>>q;
    resul= (p+1)*(q+1);
    cout<<resul<<endl;
 }
}
