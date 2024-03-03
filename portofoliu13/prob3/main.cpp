/**/
#include <bits/stdc++.h>
using namespace std;

//contor solutii
int nr=0;

//functie care afisaza solutia
int print(int n, int v[]){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

/*functia principala care genereaza numere prin metoda backtracking, contorul k reprezentand
 pozita cifrei in solutie(unitati, zeci, sute etc.), si contorul i luand valorile cifrelor pare, decidand valoare
 va fi luata pe pozitia k*/

void bt(int sol[], int n, int k=0){

    if(k==n){
        print(n, sol);
    }
    else{
        for(int i=0; i<=8; i=i+2){
            if(k==0 && i==0){
                i=i+2;
            }
            sol[k]=i;
            bt(sol, n, k+1);
        }
    }

}

int main(){
    /*valori de test, toate numerele pare cu prefixe pare(cea ce banuiesc ca inseamna ca toate cifrele trebuie sa fie pare)
    de lungime 3
     problema se incadreaza in categoria problemelor rezolvabile prin produs cartezian, specific
     aceasta se rezolva prin produs cartezian de n-1 multimi de forma {0, 2, 4, 6, 8} si {2, 4, 6, 8}*/
    int sol[3];

    bt(sol, 3);

}