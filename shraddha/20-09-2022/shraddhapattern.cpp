1. Display 1
01
010
1010
10101

Ans. #include <iostream>
using namespace std;
int main() {
    int c=1;
    for(int i=1; i<=5;i++)
    {
        for( int j=1; j<=i ;j++)
        {
            if(c%2==0)
            {
                cout<<"0";
            }
            else{
            cout<<"1";
            }
            c++;
        }
        
        cout<<endl;
     }
     
    }
