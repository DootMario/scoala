#include <bits/stdc++.h>
using namespace std;
///4148
void FNume(char s[], char id[]){

    char * p=strchr(s, ' ');

    cout<<p<<endl;

    strcpy(id, p+1);
    strcpy(id+strlen(p)-1, "2022");


}