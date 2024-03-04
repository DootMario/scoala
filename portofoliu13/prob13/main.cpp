/*sa se aranjeze melodiile de la un festival de muzica,
 * in asa fel incat melodie 1 sa cante a 2 a si melodia 2 sa cante penultima*/

#include <bits/stdc++.h>
using namespace std;

//afiseaza solutia
int print(int n, int v[]){

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

//verificare pozitii m1 si m2
int check(int v[], int n){
    if(v[1]==1 && v[n-2]==2){
        return 1;
    }
    return 0;
}

//verificare nerepetare
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

//functie care creaza permutarile cu restrictii
void bt(int sol[], int n, int k=0){
    if(k==n){
        if(check(sol, n) && once(n, sol)){
            print(n, sol);
        }
    }
    else{
        for(int i=1; i<=n; i++){
            sol[k]=i;
            bt(sol, n, k+1);
        }
    }
}

int main() {

    //date de test, 5 melodii
    int sol[5];

    bt(sol, 4);

}
