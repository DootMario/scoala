#include <bits/stdc++.h>
using namespace std;

///914

fstream fin("halfsort1.in", ios::in);
fstream fout("halfsort1.out", ios::out);

void citire(int &n, int v[]){

    fin>>n;

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

}

void afisare(int v[], int n){

    for(int i=0; i<n; i++){
        fout<<v[i]<<" ";
    }
    fout.close();
}

void sort(int v[], int a, int b, int d=0){

    int ok=0;

    if(d){
        while(ok==0){
            ok=1;
            for(int i=a; i<b-1; i++){
                if(v[i]>v[i+1]){
                    ok=0;
                    int aux = v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                }
            }
        }
    }

    if(!d){
        while(ok==0){
            ok=1;
            for(int i=b; i<a+1; i--){
                if(v[i]>v[i-1]){
                    ok=0;
                    int aux = v[i];
                    v[i]=v[i-1];
                    v[i-1]=aux;
                }
            }
        }
    }

}

int main() {

    int v[100], n ;

    citire(n, v);

    sort(v, 0, n/2);
    sort(v, n/2+1, n, 1);

    afisare(v, n);

}
