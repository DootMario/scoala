#include <bits/stdc++.h>
using namespace std;

int main(){

    char s[101], c[101], cod[101]="";
    int k=0;

    cin.getline(s, 101);
    cin.getline(c, 101);


    if(strlen(s)!=strlen(c)){
        cout<<"cod incorect!";
        return 0;
    }

    for(int i=strlen(s)-1; i>0; i--){

        if(c[i]%2==0){
            cod[k]=s[i];
            k++;
        }

    }

    cod[k]=s[0];
    k++;

    for(int i=0; i<strlen(s); i++){

        if(c[i]%2!=0){
            cod[k]=s[i];
            k++;
        }
    }

    cod[k]=NULL;

    cout<<cod;

}