#include<iostream>
using namespace std;
int main()
{
    for(int i=1 ; i<=5; i++)              
    {
        for(int j =5;j>=i;j--)
        {
            cout<<" * ";
        }
        for(int k=1;k<=i*2-2;k++)
        {
            cout<<"   ";
        }
        for(int t=5;t>=i;t--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
return 0;
}