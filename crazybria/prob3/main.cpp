#include <bits/stdc++.h>
using namespace std;

struct oras{

    char name[101];
    double x, y;

};


float dist(oras a, oras b){

    return sqrt(pow(a.x-b.x, 2)+ pow(a.y-b.y, 2));

}


int main() {

    fstream fin("ORASE.IN", ios::in);

    char line[200];
    int n=0;

    while(fin.getline(line, 200)){
        n++;
    }

    ///intorc cursorul la inceputul fisierului
    fin.clear();
    fin.seekg(0);

    oras v[n], os;

    for(int i=0; i<n; i++){

        fin.getline(line, 200);

        strcpy(v[i].name, strtok(line, " "));
        v[i].x= atof(strtok(NULL, " "));
        v[i].y= atof(strtok(NULL, " "));

    }


    cout<<"Dati oras: ";
    cin.getline(os.name, 101);
    cin>>os.x;
    cin>>os.y;

    float dmin=INFINITY;

    int j;

    for(int i=0; i<n; i++){
        if(dist(v[i], os)<dmin){
            dmin= dist(v[i], os);
            j=i;
        }
    }

    cout<<v[j].name;

}
