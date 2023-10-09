#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[101], cuv[51][101], note[7][4]={"DO", "RE", "MI", "FA", "SI", "LA", "SOL"};

    cin.getline(s, 101);

    char* p= strtok(s, " ");
    strcpy(cuv[0], p);

    int i=1;

    while (p){
        strcpy(cuv[i], p);
        i++;
        p= strtok(NULL, " ");
    }

    for(int j=0; j<i; j++){
        for(int k=0; k<7; k++){
            if(strstr(cuv[i], note(k))){

            }
        }
    }

}
