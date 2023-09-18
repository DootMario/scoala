#include <bits/stdc++.h>
using namespace std;
///prob 11
int main() {
    char s[21], voc[]="aeiou";
    cin.getline(s, 21);
    int n=strlen(s);

    for(int i=0; i<n; i++){

        if(strchr(voc, s[i]) != NULL){
            s[i]=s[i]-32;
        }

    }

    cout<<s;

}
