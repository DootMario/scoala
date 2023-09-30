#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char s[100], voc[]="aeiou";

    cin.getline(s, 100);

    for(int i=0; i<strlen(s); i++){
        if(strchr(voc, s[i])!=NULL){
            s[i]++;
        }
    }

    cout<<s;
}