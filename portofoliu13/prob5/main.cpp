/*sa se afiseze toate posibilitatile de aranjare a unor piese pe caseta,
 in asa fel incat piesa x sa fie mereu inaintea piesei y*/

#include <bits/stdc++.h>
using namespace std;

//functie care scrie solutia
int print(int n, int v[]){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}


//functie care verifica nerepetarea pieselor pe caseta(deoarece presupun ca nu ai pune aceasi piesa de 2 ori)
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
//functie care intoarce pozitia in vector a unui nr x
//ne optimizata deoarece in problema se specifica ca n<=10 prin urmare nu este nevoie o implementare optima
int find(int x, int v[], int n){
    for(int i=0; i<n; i++){
        if(v[i]==x){
            return i;
        }
    }
}

/*functie recursiva care genereaza toate posibilele solutii folozind metoda backtracking*/
void bt(int sol[], int n, int x, int y, int k=0){

    if(k==n){
        if(find(x, sol, n)>find(y, sol, n) && once(n, sol)){
            print(n, sol);
        }
    }
    else{
        for(int i=1; i<n+1; i++){
            sol[k]=i;
            bt(sol, n, x, y, k+1);
        }
    }

}

int main() {

    //date de test, 3 piese total, de la 1 la 3

    //problema se incadreaza la capitolul permutari cu restrictii

    int sol[3];

    bt(sol, 3, 1, 3);

}
