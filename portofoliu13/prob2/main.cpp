/*Cate nr naturale cu cifre distincte se pot forma cu cifrele de la 1 la n si care sunt acestea?*/

#include <bits/stdc++.h>
using namespace std;

//contor nr solutii
int nr=0;

//functie care afisaza solutiile
int print(int n, int v[]){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

}

//verificarea solutiei pt, verifica daca cifrele nr sunt distincte
int once(int n, int v[]){

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]==v[j]){
                return 0;
            }
        }
    }
    return 1;
}

/*functie recursiva, genereaza prin metoda back tracking toate solutiile valide,
 pt nr de lungimea l*/
void bts(int sol[], int l, int n, int k=0){

    if(k==l){
        if(once(l, sol)){
            nr++;cout<<"sol nr:"<<nr<<" ( ";print(l, sol);cout<<")"<<endl;
        }
    }
    else{
        for(int i=1; i<=n; i++){
            sol[k]=i;
            bts(sol, l, n, k+1);
        }
    }
}

/*functie iterativa care cheama functia bts() de l ori, dandui ca argument l pe i de la 1 la l
 cu scopul de a gasii toate solutiile, pentru toate lungimile posibile ale numarului*/
void btl(int l, int sol[], int n){
    //realizez acum ca n si l o sa aiba mereu aceasi valoare mereu asa ca as fi putut folosii o singura variabila
    for(int i=1; i<=l; i++){
        bts(sol, i, n);
    }

}

int main(){
    /*valori de test, genereaza toate solutiile  pt n=4
    problema cere permutarile submultimilor multimi nr naturale nenule pana la n
    motiv pt care bts() genereaza permutarile submultimilor de marime l
    iar btl() o cheama in o repetitiva cu for, incrementand l ul de la 1 la n,
    pt a obtine permutarile tuturor submultimilor*/
    int sol[4];

    btl(4, sol, 4);

}