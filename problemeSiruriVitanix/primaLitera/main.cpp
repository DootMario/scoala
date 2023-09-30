#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[256], voc[]="aeiou";
    int cv=0, ns=0;

    cin.getline(s, 256);

    if(strchr(voc, s[0])){
        cv++;
    }

    for(int i=1; i<strlen(s); i++){

        if(s[i]==' '){
            ns++;
            if(strchr(voc, s[i+1])){
                cv++;
            }
        }

    }

    cout<<cv<<"/"<<ns+1;

}