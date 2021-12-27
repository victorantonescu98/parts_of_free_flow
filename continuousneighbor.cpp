#include <iostream>
using namespace std;
int m[100][100],n;
void citire()
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>m[i][j];
}
void continuous_neighbor(int i,int j)
{
    for(i=1,j=1;j<=n;j++)
        if(m[i][j]==1 || m[i][j]==2 || m[i][j]==3)
        {
            if(m[i][j]==m[i][j+1])
                j++;
            if(m[i][j]==m[i+1][j])
                i++;
            if(m[i][j]==m[i-1][j])
                i--;
            if(m[i][j]==m[i][j-1])
                j--;
        }
    for(i=2,j=1;i<=n;i++)
        if(m[i][j]==1 || m[i][j]==2 || m[i][j]==3)
        {
            if(m[i][j]==m[i][j+1])
                j++;
            if(m[i][j]==m[i+1][j])
                i++;
            if(m[i][j]==m[i-1][j])
                i--;
            if(m[i][j]==m[i][j-1])
                j--;
        }
    for(i=n,j=1;j<=n;j++)
        if(m[i][j]==1 || m[i][j]==2 || m[i][j]==3)
        {
            if(m[i][j]==m[i][j+1])
                j++;
            if(m[i][j]==m[i+1][j])
                i++;
            if(m[i][j]==m[i-1][j])
                i--;
            if(m[i][j]==m[i][j-1])
                j--;
        }
    for(i=n,j=n;i>=2;i--)
        if(m[i][j]==1 || m[i][j]==2 || m[i][j]==3)
        {
            if(m[i][j]==m[i][j+1])
                j++;
            if(m[i][j]==m[i+1][j])
                i++;
            if(m[i][j]==m[i-1][j])
                i--;
            if(m[i][j]==m[i][j-1])
                j--;
        }
}
void afisare()
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cout<<m[i][j];
}
int main()
{
    citire();
    afisare();
}
