/*
     input 5
     output
               1
               2 3
               4 5 6
               7 8 9 10
               11 12 13 14 15  
*/


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
     system("cls");
     int n,count =1;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<=i;j++)
          {
               cout<<count++<<" ";
          }
          cout<<endl;
     }
     return 0;
}
