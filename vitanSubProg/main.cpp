#include <bits/stdc++.h>
using namespace std;

///3938

void generatoare(int n){

    int a, b, ok=0;

    for(a=2; a<=n/2; a=a+2){
        for(b=1; b<=n; b++){
            if(n==a*b+a/b){
                if(ok==1){
                    cout<<" ";
                }
                ok=1;
                cout<<a<<"-"<<b;
            }
        }
    }

    if(ok==0){
        cout<<"nu exista.";
    }

}
//int main(){
//
//    generatoare(2020);
//
//}
