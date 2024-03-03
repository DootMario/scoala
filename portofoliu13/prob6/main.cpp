#include <bits/stdc++.h>
using namespace std;
//contor solutii
int nr=0;

//functie care afisaza solutia
int print(int n, int v[]){
    cout<<v[0];
    for(int i=1; i<n; i++){
        cout<<"->"<<v[i];
    }
    cout<<endl;

}

//functie care verifica sa nu se repete porturile(presupun ca nu se repeta porturile deoarece cerinta este neclara)
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

/*functie recursiva care genereaza toate voiajele de lungime p prin porturile n folosind metoda backtracking
 poate fi implementata si in asa fel incat porturile sa aiba denumiri nu doar numere*/
void bt(int sol[], int pl[], int p, int n, int k=0){

    if(k==p){
        if(once(k, sol)){
            nr++;
            cout<<"voiaj nr:"<<nr<<" ";print(k, sol);
        }
    }
    else{
        for(int i=0; i<n; i++){
            sol[k]=pl[i];
            bt(sol, pl, p, n, k+1);
        }
    }

}

int main() {

    /*date de test
     problema se rezuma ca aranjamente de elemente din multimea porturilor n luate cate p
     in cazul asta 5 porturi aranjate cate 3 deci 60 de posibile voiaje*/

    int sol[3], pl[5]={1, 2, 3, 4, 5};

    bt(sol, pl, 3, 5);

}
