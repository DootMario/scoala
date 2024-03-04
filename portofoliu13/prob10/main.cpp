#include <bits/stdc++.h>
using namespace std;

int voc(char cuv[]){
    int n=0;
    char s[]="aeiou";
    for(int i=0; i<strlen(cuv)+1; i++){
        if(n>=3){
            return 0;
        }
        if(strchr(s, cuv[i])!=NULL){
            n++;
        }
        else{
            n=0;
        }
    }
    return 1;
}

int con(char cuv[]){
    int n=0;
    char s[]="aeiou";
    for(int i=0; i<strlen(cuv)+1; i++){
        if(n>=3){
            return 0;
        }
        if(strchr(s, cuv[i])==NULL){
            n++;
        }
        else{
            n=0;
        }
    }
    return 1;
}

void bt(char sol[], char alf[], int n, int k=0){
    if(k==n){
        if(voc(sol) && con(sol)){
            cout<<sol<<endl;
        }
    }
    else{
        for(int i=0; i<strlen(alf); i++) {
            sol[k] = alf[i];
            bt(sol, alf, n, k+1);
        }
    }
}

int main() {

    char sol[4]={NULL}, alf[]="abcdef";

    bt(sol, alf, 3);

}
