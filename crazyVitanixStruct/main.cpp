#include <bits/stdc++.h>
using namespace std;


struct pct{

    float x=0.0, y=0.0;
    char c[30]="origine";


};

float dist(pct a, pct b){

    return sqrt(pow(a.x-b.x, 2)+ pow(a.y-b.y, 2));

}


int main() {

    int n;
    cin>>n;

    pct v[n];

    for(int i=0; i<n; i++){
        cin>>v[i].x;
        cin>>v[i].y;
        cin.getline(v[i].c, 30);
    }

    int nr=0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i].c!=v[j].c){
                j++;
            }
            for(int k=j+1; k<n; k++){
                if(v[j].c!=v[k].c){
                    k++;
                }

                if((dist(v[i], v[j])==dist(v[j], v[k])&& dist(v[j],v[k])!= dist(v[i], v[k]))||(dist(v[j], v[k])==dist(v[k], v[i])&& dist(v[j],v[k])!= dist(v[i], v[j]))||(dist(v[i], v[j])==dist(v[i], v[k])&& dist(v[i],v[j])!= dist(v[i], v[k]))){
                    nr++;
                }

            }
        }
    }

    cout<<nr<<endl;

    pct cent;

    for(int i=0; i<n; i++){
        cent.x=cent.x+v[i].x;
        cent.y=cent.y+v[i].y;
    }

    cent.x=cent.x/n;
    cent.y=cent.y/n;

    float dmax=0;

    for(int i=0; i<n; i++){
        if(dmax<dist(cent, v[i])){
            dmax= dist(cent, v[i]);
        }
    }

    cout<<"("<<cent.x<<", "<<cent.y<<") R="<<dmax;

}
