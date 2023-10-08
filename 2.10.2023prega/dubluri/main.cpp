#include <bits/stdc++.h>
using namespace std;

///846

int find(char s[], char t[]){
    int i=0;
    char *p;
    while(strstr(s, t)!=NULL){
        i++;
        p = strstr(s, t);
        strcpy(s+ strlen(s)-strlen(p), s+ strlen(s)-strlen(p)+1);
    }
    return i;

}

int main(){
    char s[256], sub[128];

    cin.getline(s, 256);

    for(int i = strlen(s)/2; i>=2; i--){
        int j=0;
        while(j+i<= strlen(s) ){
            strncpy(sub, s+j, i);
            if(find(s, sub)>=2){
                cout<<sub;
                return 0;
            }
            j++;
        }
    }

}

/*
TEMA:
2813
2673
2953
*/