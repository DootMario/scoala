/*Un grup de studenti vor sa isi planifice m examene in n zile.
 * Cum si in cate moduri pot ei sa faca asta?*/

#include <bits/stdc++.h>
using namespace std;

//contor solutii
int n=0;

//functie care scrie solutia
int print(int n, int v[]){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

}

//functie care verifica daca s au planificat toate examenele(sau nu mai multe de cat trebuie)
int enough(int n, int v[], int m){

    int k=0;

    for(int i=0; i<n; i++){
        if(v[i]!=0){
            k++;
        }
    }

    if(k==m){
        return 1;
    }
    return 0;

}

/*principala functie care ruleaza. backtracking recursiv, creaza un vector de lungimea zilelor disponibile
 iar apoi prin contorul recursiv k(contorizeaza ziua in care alegem daca punem un examen sau nu) si i care decide daca
 in ziua k punem un examen sau nu creaza toate solutiile posibile, urmand apoi sa fie afisate doar cele valide prin
 verificarea functiei enough()*/
void bt(int sol[], int e, int d, int k=0){

    if(k==d){
        if(enough(d, sol, e)){
            n++;cout<<"sol nr:"<<n<<" ( ";print(d, sol);cout<<")"<<endl;
        }
    }
    else{
        for(int i=0; i<=1; i++){
            sol[k]=i;
            bt(sol, e, d, k+1);
        }
    }
}

int main(){
    /*valori de test, sol ia lungimea nr de zile, primul argument al bt ia nr de examene iar al doilea nr de zile
     in cazul exempu 3 examene 7 zile sunt 35 (problema incadrandu-se in categoria combinari, specific combinari de n luate cate m)*/
    int sol[7];

    bt(sol, 3, 7);

}

