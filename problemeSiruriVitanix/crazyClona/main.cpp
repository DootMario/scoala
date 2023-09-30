#include <bits/stdc++.h>
using namespace std;

int main(){

    char s[100], voc[]="aeiou", p[100];

    fstream fin("crazyClone.in", ios::in);

    fin.getline(s, 100);

    cout<<s<<endl;

    for(int i=0; i<5; i++){

        if(strchr(s, voc[i])!=NULL){
            strcpy(p, s);
            for(int j=0; j<strlen(p); j++){
                if(p[j]==voc[i]){
                    strcpy(p+j, p+j+1);
                    j--;
                }
            }
            cout<<p<<endl;
        }

    }

}