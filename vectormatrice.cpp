//transformare vector in matrice
#include <iostream>

using namespace std;

int main()
{
    int a[100],m[100][100],n,i,j,k,N;
    cin>>N>>n;
    for(k=1;k<=N;k++)
        cin>>a[k];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            m[i][j]=0;
    i=1;
    j=1;
    k=1;
    while(i<=n)
    {
        while(j<=n)
        {
            m[i][j]=a[k];
            j++;
            k++;
        }
        i++;
        j=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}
