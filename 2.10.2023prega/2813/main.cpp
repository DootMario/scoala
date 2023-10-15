#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[101], cuv[51][101], note[7][4]={"DO", "RE", "MI", "FA", "SOL", "LA", "SI"};

    cin.getline(s, 101);

    char* p= strtok(s, " ");

    int i=0;

    while (p){
        strcpy(cuv[i], p);
        i++;
        p= strtok(NULL, " ");
    }

    for(int j=0; j<i; j++){
        for(int k=0; k<7; k++){
            if(strstr(cuv[j], note[k])){
                cout<<cuv[j]<<endl;
                break;
            }
        }
    }

}
