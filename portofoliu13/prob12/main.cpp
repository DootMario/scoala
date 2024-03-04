//sa se afiseze toate modurile de aranjare a elementelor unui sir de nr intregi
// astfel incat in sirul rezultat sa nu existe doua elemente alaturate negative
#include <bits/stdc++.h>
using namespace std;

int n,x[100000],v[100000],u[100000],cp1[100000];
int ok(int k)
{
    for(int i=1;i<=k-1;i++)
    {
        if(x[k]==x[i])
        {
            return 0;
        }
    }
    if(k>1)
    {
        if(v[x[k]] < 0 )
        {
            if(v[x[k-1]] < 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int sol(int k)
{
    if(k!=n)
    {
        return 0;
    }
    return 1;
}
void back(int k)
{
    for(int i=1;i<=n;i++)
    {
        x[k]=i;
        if(ok(k)==1)
        {
            for(int j=1;j<=n;j++)
            {
                cp1[j]=x[j];
            }
            if(sol(k)==1)
            {
                int aux;
                for(int j=1;j<=n;j++)
                {
                    u[j]=v[x[j]];
                }
                for(int j=1;j<=n;j++)
                {
                    cout << u[j] << " ";
                }
                cout << endl;
                for(int j=1;j<=n;j++)
                {
                    x[j]=cp1[j];
                }
            }else
            {
                back(k+1);
            }
        }
    }
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
    }
    back(1);
}

// problema se incadreaza in clasa permutarilor