/*
     input 5
      output
                    A
                    B B       
                    C C C     
                    D D D D   
                    E E E E E 
     
*/


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
     system("cls");
     int n,count =1;
     cin>>n;
     char ch='A';
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<=i;j++)
          {
               cout<<ch<<" ";
          }
          ch++;
          cout<<endl;
     }
     return 0;
}
