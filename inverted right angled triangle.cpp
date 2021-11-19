/*
                                input 1 =                     8
                               output 1 = 
                                                          ********
                                                           *******
                                                            ******
                                                             *****
                                                              ****
                                                               ***
                                                                **
                                                                 *

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
        for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}
