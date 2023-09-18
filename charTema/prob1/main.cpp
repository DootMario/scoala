#include <bits/stdc++.h>
using namespace std;
///prob 972
int main() {
    int x=0;
    char s[256], voc[]="aeiou ";
    cin.getline(s, 256);
    int n=strlen(s);

    for(int i=1; i<n; i++){

        if(strchr(voc, s[i]) != NULL){
            if(strchr(voc, s[i-1])==NULL && strchr(voc, s[i+1])==NULL && s[i]!=' '){
                x++;
            }
        }

    }

    cout<<x;

}
