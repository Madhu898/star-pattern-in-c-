/*
               input 1 =        5
              output 1 =        
                                * 
                               * * 
                              * * * 
                             * * * * 
                            * * * * *
                              





*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    system("cls");
    int  n;
    cin>>n;
    for(int i=1;i<=n;i++ )
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    return 0;
}